/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:03:57 by sungjuki          #+#    #+#             */
/*   Updated: 2022/07/05 12:10:42 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_read(char *filename, t_game *game)
{
	int		fd;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd <= 0)
		print_err("File open fail.\n");
	line = get_next_line(fd);
	game->h = 0;
	game->walk_cnt = 0;
	game->w = ft_strlen(line) - 1;
	game->str_line = ft_strdup_without_nl(line);
	while (line)
	{
		game->h++;
		line = get_next_line(fd);
		if (line)
			game->str_line = ft_strjoin_without_nl(game->str_line, line);
	}
	close(fd);
}

void	map_check(t_game *game)
{
	if (game->h * game->w != ft_strlen(game->str_line))
		print_err("Map must be rectangler.\n");
	map_check_wall(game);
	map_check_params(game);
}

void	map_check_wall(t_game *game)
{
	int	i;

	i = 0;
	while (i < ft_strlen(game->str_line))
	{
		if (i < game->w)
		{
			if (game->str_line[i] != '1')
				print_err("Map needs to be surrounded by walls\n");
		}
		else if (i % game->w == 0 || i % game->w == game->w - 1)
		{
			if (game->str_line[i] != '1')
				print_err("Map needs to be surrounded by walls\n");
		}
		else if (i > ft_strlen(game->str_line) - game->w)
		{
			if (game->str_line[i] != '1')
				print_err("Map needs to be surrounded by walls\n");
		}
		i++;
	}
}

void	map_check_params(t_game *game)
{
	int	i;
	int	num_e;
	int	num_p;

	i = 0;
	num_e = 0;
	num_p = 0;
	game->all_col = 0;
	game->col_cnt = 0;
	while (i < ft_strlen(game->str_line))
	{
		if (game->str_line[i] == 'E')
			num_e++;
		else if (game->str_line[i] == 'P')
			num_p++;
		else if (game->str_line[i] == 'C')
			game->all_col++;
		i++;
	}
	if (num_e == 0)
		print_err("Map must have one exit at least.\n");
	if (game->all_col == 0)
		print_err("Map must have one collectible at least.\n");
	if (num_p != 1)
		print_err("Map must have one starting position.\n");
}

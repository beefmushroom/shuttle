/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:01:26 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 20:02:01 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void    bsq_begin(char *file)
{
    t_map    *map;
    t_sqr    *sqr;

    if (file)
        map = read_file(file);
    else
        map = read_stdin();
    if (!map)
    {
        ft_putstr(ERR_MSG);
        return ;
    }
    sqr = find_bsq(map);
    if (!sqr->len)
        ft_putstr(ERR_MSG);
    else
        print(map, sqr);
    free_map(map, map->y_len);
    free(sqr);
}

int	main(int argc, char *argv[])
{
	int	i;
    
	if (argc == 1)
		bsq_begin(0);
	else
	{
		i = 0;
		while (++i < argc)
			bsq_begin(argv[i]);
	}
	return (0);
}

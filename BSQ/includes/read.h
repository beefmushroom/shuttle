/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:19:26 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 17:19:27 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include "bsq.h"

t_map   *read_stdin(void);
t_map   *read_file(char *file);
t_map   *read_map(int fd);
char    *read_line(int fd);
int    read_map_sub(int *idx, t_map *map, char *line);

#endif

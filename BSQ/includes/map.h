/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:17:14 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 17:17:17 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "bsq.h"

int parse_map_info(t_map *map, char *info);
int parse_map_info_sub(t_map *map, char *info);
int is_printable(char c);
int make_map(t_map *map, int fd);
int is_valid_map_info(t_map *map);

#endif

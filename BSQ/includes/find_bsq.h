/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bsq.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:10:35 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 17:12:08 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_BSQ_H
# define FIND_BSQ_H

# include "struct.h"

t_sqr       *find_bsq(t_map *map);
int         **make_arr(t_map *map);
void        change_sqr(t_sqr *sqr, int x, int y, int len);
void        find_bsq_sub(int i, t_map *map, int **arr, t_sqr *sqr);
int         check_sqr(int **arr, int i, int j);

#endif

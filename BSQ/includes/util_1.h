/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_1.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:17:39 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 17:17:43 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_1_H
# define UTIL_1_H

# include "struct.h"

char	*expand_info(char *src, int *size);
int		ft_is_number(char c);
int		ft_atoi(char *str);
int		ft_is_valid_map(char *line, t_map *map);

#endif

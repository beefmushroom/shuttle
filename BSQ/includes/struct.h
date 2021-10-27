/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:11:38 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 17:11:51 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_sqr{
	int		x;
	int		y;
	int		len;
}				t_sqr;

typedef struct s_map{
	char	full;
	char	empty;
	char	obstacle;
	int		x_len;
	int		y_len;
	char	**arr;
}				t_map;
#endif

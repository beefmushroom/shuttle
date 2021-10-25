/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:50:57 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/24 23:08:54 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE		1
# define FALSE		0
# define EVEN(n)	((n % 2 == 0) ? TRUE : FALSE)
# define EVEN_MSG	"I have an even number of argument.\n"
# define ODD_MSG	"I have an odd number of argument.\n"
# define SUCCESS	0

typedef int	t_bool;

#endif

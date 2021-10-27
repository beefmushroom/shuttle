/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:12:47 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/26 16:13:30 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "includes/ft.h"

int main(void)
{
	int x = 42;
	int y = 21;

	ft_putchar('0');
	ft_putchar('\n');
	ft_swap(&x, &y);
	printf("X: %d Y: %d\n", x, y);
	ft_putstr("Hello World!\n");
	printf("len: %d %s\n", ft_strlen("Hello"), "Hello");
	printf("cmp: %d\n", ft_strcmp("123545", "12354455"));
	printf("cmp: %d\n", ft_strcmp("12354", "12354455"));
	printf("cmp: %d\n", ft_strcmp("12345", "12345"));
}

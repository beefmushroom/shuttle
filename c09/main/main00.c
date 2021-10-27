/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:03:32 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/26 15:00:35 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

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
	printf("cmp: %d\n", ft_strcmp("12351", "12354455"));
	printf("cmp: %d\n", ft_strcmp("12357", "12354455"));
	printf("cmp: %d\n", ft_strcmp("12345", "12345"));
}

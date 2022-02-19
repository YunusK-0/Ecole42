/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:10:23 by yukara            #+#    #+#             */
/*   Updated: 2022/02/15 15:10:26 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ayrik(char a, char b, char c);

void	ayrik(char a, char b, char c)
{
	char	d;

	d = '0';
	while (d <= '9')
	{
		if (((10 * a) + b) < ((10 * c) + d))
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (a == '9' && b == '8' && c == '9' && d == '9')
				return ;
			write(1, ", ", 2);
		}
		d++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ayrik(a, b, c);
				c++;
			}
			b++;
			c = a;
		}
		a++;
		b = '0';
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_nonprintable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:39:21 by yukara            #+#    #+#             */
/*   Updated: 2022/02/19 23:39:22 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_convert_to_hex(char c)
{
	char	a;
	char	b;
	char	d;

	a = 'W';
	d = c / 16 + 48;
	b = c % 16;
	if (b < 10)
		b += 48;
	else
		b += a;
	ft_putchar('\\');
	write(1, &d, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			ft_convert_to_hex(str[i]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

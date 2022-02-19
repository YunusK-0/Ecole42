/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:00:52 by yukara            #+#    #+#             */
/*   Updated: 2022/02/14 00:00:54 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	b;
	int	a;
	int	temp;

	a = 0;
	while (a <= size)
	{
		b = 0;
		while (b < size - 1)
		{
			if (*(tab + b) > *(tab + b + 1))
			{
				temp = *(tab + b + 1);
				*(tab + b + 1) = *(tab + b);
				*(tab + b) = temp;
			}
			b++;
		}
		a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:06:49 by yukara            #+#    #+#             */
/*   Updated: 2022/03/01 18:06:51 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
		return (res);
	}
	else
		return (0);
}

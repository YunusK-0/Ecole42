/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:06:57 by yukara            #+#    #+#             */
/*   Updated: 2022/03/01 18:06:59 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
	else
		return (0);
}

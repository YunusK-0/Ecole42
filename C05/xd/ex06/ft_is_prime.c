/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:07:47 by yukara            #+#    #+#             */
/*   Updated: 2022/03/01 18:07:48 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	f;

	i = 2;
	f = 0;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (i < nb && f != 1)
	{
		if (nb % i == 0)
			f = 1;
		else
			f = 0;
		i++;
	}
	if (f)
		return (0);
	else
		return (1);
}

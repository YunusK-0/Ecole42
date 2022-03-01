/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:07:38 by yukara            #+#    #+#             */
/*   Updated: 2022/03/01 18:07:39 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if ((nb <= 0))
		return (0);
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		else if (x >= 46341)
			return (0);
		x++;
	}
	return (0);
}
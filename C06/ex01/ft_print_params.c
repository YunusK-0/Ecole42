/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:44:27 by yukara            #+#    #+#             */
/*   Updated: 2022/02/22 13:44:28 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	sayac;
	int	i;

	i = 1;
	sayac = 0;
	while (i < argc)
	{
		while (argv[i][sayac] != '\0')
		{
			write(1, &argv[i][sayac], 1);
			sayac++;
		}
		write(1, "\n", 1);
		sayac = 0;
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:56:15 by yukara            #+#    #+#             */
/*   Updated: 2022/02/22 13:56:16 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	sayac;

	sayac = 0;
	while (argc > 1)
	{
		while (argv[argc - 1][sayac] != '\0')
		{
			write(1, &argv[argc - 1][sayac], 1);
			sayac++;
		}
		write(1, "\n", 1);
		sayac = 0;
		argc--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 06:02:22 by yukara            #+#    #+#             */
/*   Updated: 2022/02/14 06:02:24 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
						str[i] = str[i] - 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 03:35:37 by yukara            #+#    #+#             */
/*   Updated: 2022/02/20 03:35:38 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	isaret(char *str, int konum, int *kontrol)
{
	while (str[konum] != '\0')
	{
		if (str[konum] == '-')
			*kontrol *= -1;
		else if (str[konum] == '+')
			*kontrol *= 1;
		else
			return (konum);
		konum++;
	}
	return (0);
}

int	whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			i++;
		}
		else if (str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
		else
		{
			return (i);
		}
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	sonuc;
	int	*kontrol;
	int	bos;
	int	i;

	sonuc = 0;
	i = whitespace(str);
	kontrol = &bos;
	*kontrol = 1;
	i = isaret(str, i, kontrol);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			sonuc = (10 * sonuc) + str[i] - 48;
		else
		{
			if (bos == 1)
				return (sonuc * bos);
			else
				return (sonuc * bos * -1);
		}
		i++;
	}
	return (sonuc * *kontrol);
}

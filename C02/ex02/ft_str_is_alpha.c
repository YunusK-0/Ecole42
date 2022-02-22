/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukara <yukara@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 03:23:39 by yukara            #+#    #+#             */
/*   Updated: 2022/02/14 03:47:15 by yukara           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;
	int	notflag;

	i = 0;
	flag = 0;
	notflag = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			notflag++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			notflag++;
		else if (str[0] == '\0')
			notflag++;
		else
			flag++;
		i++;
	}
	if (flag == 0)
		return (1);
	else
		return (0);
}

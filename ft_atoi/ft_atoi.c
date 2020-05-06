/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 19:12:54 by sedric            #+#    #+#             */
/*   Updated: 2020/04/30 21:51:44 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int number;
	int flag;

	i = 0;
	number = 0;
	flag = 1;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			flag = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = str[i] - 48 + number * 10;
		i++;
	}
	return (number * flag);
}

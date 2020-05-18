/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 22:46:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/18 10:39:42 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		arr[10];
	int		i;
	int		flag;
	char	*number;

	flag = (n < 0 ? 1 : 0);
	i = 0;
	while (n != 0 || i == 0)
	{
		arr[i] = (flag == 0 ? n % 10 : n % 10 * -1);
		n = n / 10;
		i++;
	}
	if (!(number = malloc(sizeof(char) * (i + 1 + flag))))
		return (NULL);
	flag == 1 ? number[0] = '-' | n++ : 0;
	while (i > 0)
	{
		number[n] = arr[i - 1] + 48;
		i--;
		n++;
	}
	number[n] = '\0';
	return (number);
}

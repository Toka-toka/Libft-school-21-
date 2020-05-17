/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 22:46:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/18 00:54:03 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	int arr[10];
	int i;
	int flag;
	char *number;
	
	flag = (n < 0 ? 1 : 0);
	i = 0;
	while (n != 0 || i == 0)
	{
		flag == 1 ? (arr[i] = n % 10 * -1) : (arr[i] = n % 10);
		n = n / 10;
		i++;
	}
	number = malloc(sizeof(char)*(i + 1 + flag));
	if (number == NULL)
			return (NULL);
	if (flag == 1)
	{
		number[n] = '-';
		n++;
	}
	while (i > 0)
	{
		number[n] = arr[i - 1] + 48;
		i--;
		n++;
	}
	number[n] = '\0';
	return (number);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/12 20:42:40 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <unistd.h>
# include <bsd/string.h>
# include "libft.h"

int main (void)
{
	char s[4] = "133";
	char s1[4] = "133";
//	s[4] = 0;
	size_t len = 4;
	int res;
	res = ft_strncmp(s, s1, len);
///	if (res == NULL)
//		printf("Нулевая строка");
	if (res == 0) 
		printf("Строки равны");
	else
		printf("Строки отличаются, res = %d\n", res);
	return (0);
}

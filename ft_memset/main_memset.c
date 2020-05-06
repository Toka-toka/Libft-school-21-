/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/06 18:35:17 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memset(void *str, int symbol, size_t n);

int main (void)
{
	char str[] = "12345";
	int symbol = 'x';
	size_t n = 6;
	ft_memset(str, symbol, n);
//	memset(str, symbol, n);
	printf("Size of str = %ld", sizeof(str));
	printf("NEW = %s", str);
	return (0); 
}

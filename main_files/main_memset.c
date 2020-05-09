/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/06 19:22:50 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>

void    *ft_memset(void *str, int symbol, size_t n);

int main (void)
{
	char str[] = "12345";
	int symbol = 45;
	size_t n = 5;
	memset(str, symbol, n);
	printf("NEW = %s\n", str);
	return (0); 
}

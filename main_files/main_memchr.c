/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/07 15:29:06 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>
# include <unistd.h>

void    *ft_memchr(const void *arr, int symbol, size_t n);

int main (void)
{
	char arr[] = "123456789";
	size_t n = 1;
	char *symbol;
	symbol = ft_memchr(arr, '1', n);
	if (symbol == NULL)
		printf("Символ не найден");
	else
		write(1, symbol, 1);
	return (0); 
}

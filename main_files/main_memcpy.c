/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/06 20:20:55 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>
# include <unistd.h>

void    *ft_memcpy(void *dest, const void *src, size_t n);

int main (void)
{
	int i = 0;
	char src[] = "abcde";
	char dest[] = "6789";
	size_t n = 0;
	ft_memcpy(dest, src, n);
	while (i < 5)
	{
		write (1, &dest[i], 1);
		i++;	
	}
	return (0); 
}

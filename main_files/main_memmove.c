/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/07 14:07:23 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>
# include <unistd.h>

void    *ft_memmove(void *dest, const void *src, size_t n);

int main (void)
{
	int i = 0;
	char src[] = "12345";
	char dest[] = "67890";
	size_t n = 5;
	ft_memmove(dest, src, n);
	while (i < 6)
	{
		write (1, &dest[i], 1);
		i++;	
	}
	return (0); 
}

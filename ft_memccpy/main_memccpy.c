/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/06 21:31:31 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>
# include <unistd.h>

void    *ft_memccpy(void *dest, const void *src, int symbol, size_t n);

int main (void)
{
	unsigned int i = 0;
	char src[] = "123456789";
	char dest[] = "000000000";
	size_t n = 8;
	ft_memccpy(dest, src,'9',n);
	while (i < 10)
	{
		write (1, &dest[i], 1);
		i++;	
	}
	printf("Dest = %s", dest);
	return (0); 
}

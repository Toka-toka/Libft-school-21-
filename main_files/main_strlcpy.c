/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/08 16:50:38 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <bsd/string.h>
# include <stdio.h>
# include <unistd.h>

size_t    ft_strlcpy(void *dest, const void *src, size_t n);

int main (void)
{
	int i = 0;
	char src[] = "12345";
	char dest[] = "xxx";
	size_t n = 4;
	size_t a = 0;
	a = ft_strlcpy(dest, src, n);
	printf("a = %ld\n", a);
	while (i < 4)
	{
		write (1, &dest[i], 1);
		i++;
	}	
	return (0); 
}

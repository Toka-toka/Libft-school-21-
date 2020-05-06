/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/06 19:00:19 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>
# include <unistd.h>

void    ft_bzero(void *str, size_t n);

int main (void)
{
	int i = 0;
	char str[] = "12345";
	size_t n = 0;
//	bzero(str, n);
	ft_bzero(str, n);
//	printf("NEW = %s", str);
	while (i < 6)
	{
		write (1, &str[i], 1);
		i++;
	}
	return (0); 
}

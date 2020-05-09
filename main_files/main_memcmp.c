/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/07 16:12:43 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>
# include <unistd.h>

int    ft_memcmp(const void *s1, const void *s2, size_t n);

int main (void)
{
	char arr1[] = "111111112";
	char arr2[] = "111111111";
	size_t n = 10;
	printf("Result = %d", ft_memcmp(arr1, arr2, n));
	return (0); 
}

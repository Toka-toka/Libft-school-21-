/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/09 23:32:49 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <bsd/string.h>
# include <stdio.h>
# include <unistd.h>
# include "libft.h"

int main (void)
{
	int i = 0;
	char src[7] = "";
	char dest_myshit[2] = "";
	char dest_origin[2] = "";
	size_t n = 1;
	size_t a = 0;
	size_t b = 0;
	b = strlcat(dest_origin, src, n);
	a = ft_strlcat(dest_myshit, src, n);
	if(a == b)
		printf("Right len\n");
	else
		printf("Wrong len\n");
	printf("Return_ft = %ld\nReturn_origin = %ld\n", a, b);
	printf("Dest_origin[] = %s\nDest_myshit[] = %s\n", dest_origin, dest_myshit);
	return (0); 
}

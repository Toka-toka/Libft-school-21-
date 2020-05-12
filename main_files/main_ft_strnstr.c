/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/12 18:58:22 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <unistd.h>
# include <bsd/string.h>
# include "libft.h"

int main (void)
{
	char s[] = "112x";
	char s1[] = "2"; 
	size_t len = 3;
	char *position;
	position = ft_strnstr(s, s1, len);
	if (position != NULL)
		printf("Символ = %s", position);
	else 
		printf("Не найден");
	return (0); 
}

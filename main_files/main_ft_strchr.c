/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/10 01:55:48 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include "libft.h"

int main (void)
{
	int symbol = '\0';
	char s[] = "123456789";
	char *position;
	position = ft_strchr(s, symbol);
	if (position != NULL)
		printf("Символ = %ld", position - s);
	else 
		printf("Не найден");
	return (0); 
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/10 02:40:15 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include "libft.h"

int main (void)
{
	int symbol = '1';
	char s[] = "11123";
	char *position;
	position = ft_strrchr(s, symbol);
	if (position != NULL)
		printf("Символ = %ld", position - s);
	else 
		printf("Не найден");
	return (0); 
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:15:05 by sedric            #+#    #+#             */
/*   Updated: 2020/05/07 17:45:00 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);

int main (void)
{
	char s[5] = "12345";
//	s[3] = 3;
	printf("Result = %ld", ft_strlen(s));
	return (0); 
}

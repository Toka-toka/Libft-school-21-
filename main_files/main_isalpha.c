/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:00:50 by sedric            #+#    #+#             */
/*   Updated: 2020/05/13 18:08:18 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctype.h>
# include <stdio.h>

# include "libft.h"

int	main (void)
{
	int i = -1;
	int fail = 0;
	while (i != 260)
	{
		if (isalpha(i) != ft_isalpha(i))
		{
			printf("Fail at number i = %c\n", i);
			printf("isalpha = %d\n", isalpha(i));
			fail++;
		}
		i++;
	}
	if (fail == 0)
		printf("Function ft_isalpha works well!");
//	printf("I \nlove\n Nataly");
	return (0);
}

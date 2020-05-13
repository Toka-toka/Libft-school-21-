/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:00:50 by sedric            #+#    #+#             */
/*   Updated: 2020/05/13 15:44:52 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctype.h>
# include <stdio.h>

# include "libft.h"

int	main (void)
{
	int i = 0;
	int symbols[20] = {47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 64, 65, 90, 91, 96, 97, 122, 123};
	while (i != 20)
	{
		printf("isalnum = %d	ft_isalnum = %d\n", isalnum(symbols[i]), ft_isalnum(symbols[i]));
		i++;
	}
}

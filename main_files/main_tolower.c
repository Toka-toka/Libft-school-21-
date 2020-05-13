/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:00:50 by sedric            #+#    #+#             */
/*   Updated: 2020/05/13 16:20:57 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctype.h>
# include <stdio.h>

# include "libft.h"

int	main (void)
{
	int i = 0;
	int symbols[6] = {'A', 'a', 48, 50, 'Z', 'z'};
	while (i != 6)
	{
		printf("isascii = %c	ft_isascii = %c\n", tolower(symbols[i]), ft_tolower(symbols[i]));
		i++;
	}
}

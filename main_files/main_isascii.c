/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:00:50 by sedric            #+#    #+#             */
/*   Updated: 2020/05/13 16:06:00 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctype.h>
# include <stdio.h>

# include "libft.h"

int	main (void)
{
	int i = 0;
	int symbols[12] = {-1, 1, 5, 10, 20, 50, 100, 127, 128, 200, 300, 500};
	while (i != 12)
	{
		printf("isascii = %d	ft_isascii = %d\n", isascii(symbols[i]), ft_isascii(symbols[i]));
		i++;
	}
}

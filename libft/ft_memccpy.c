/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/15 19:38:46 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		*ft_memccpy(void *dest, const void *src, int symbol, size_t n)
{
	char	*dest_point;
	char	*src_point;
	char	ch_symbol;
	int		i;
	int		size;

	i = 0;
	size = n;
	n = 0;
	ch_symbol = symbol;
	dest_point = (char*)dest;
	src_point = (char*)src;
	if (dest_point == NULL && src_point == NULL)
		return (NULL);
	while (i < size && src_point[i - 1] != ch_symbol)
	{
		dest_point[i] = src_point[i];
		if (src_point[i] == ch_symbol)
			n = 1;
		i++;
	}
	if (n == 0)
		return (NULL);
	return (dest + i);
}

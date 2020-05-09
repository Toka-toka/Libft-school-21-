/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/08 16:52:28 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t len_dest)
{
	size_t len_src;
	size_t count;

	len_src = 0;
	count = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (len_dest <= 0)
		return (len_src);
	len_dest--;
	if (len_dest >= len_src)
		len_dest = len_src;
	while (count < len_dest)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (len_src);
}

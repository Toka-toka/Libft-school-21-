/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/16 15:33:23 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_point;
	unsigned char	*src_point;

	src_point = (unsigned char*)src;
	dest_point = (unsigned char*)dest;
	if (src_point == NULL && dest_point == NULL)
		return (NULL);
	if (src > dest)
		while (n != 0)
		{
			*dest_point++ = *src_point++;
			n--;
		}
	else
	{
		while (n != 0)
		{
			dest_point[n-1] = src_point[n-1];
			n--;
		}
	}
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/07 14:15:57 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_point;
	unsigned char	*src_point;
	unsigned char	temp[n];
	size_t			i;

	src_point = (unsigned char*)src;
	dest_point = (unsigned char*)dest;
	i = 0;
	while (i < n)
	{
		temp[i] = src_point[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest_point[i] = temp[i];
		i++;
	}
	return (dest);
}

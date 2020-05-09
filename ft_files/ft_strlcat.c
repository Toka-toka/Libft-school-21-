/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/10 00:11:25 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t len_src;
	size_t len_dest;
	size_t count;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	count = len_dest;
	if (n != 0)
		n--;
	else
		return (len_src);
	while (count < n && *src != '\0')
	{
		dest[count] = *src;
		count++;
		src++;
	}
	dest[count] = '\0';
	return (len_src + len_dest);
}

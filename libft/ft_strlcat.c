/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/17 01:09:32 by sedric           ###   ########.fr       */
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
	printf("Len = %ld\n", n);
	n--;
	while (count < n && *src != '\0')
	{
		dest[count] = *src;
		count++;
		src++;
	}
	dest[count] = '\0';
	printf("\nlen_src = %ld\nlen_dest = %ld\n, count = %ld", len_src, len_dest, count);
	return (len_src + count);
}

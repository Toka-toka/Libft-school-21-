/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/10 01:59:38 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*str;
	char	symbol;
	size_t	i;

	i = 0;
	symbol = (char)c;
	str = (char*)s;
	while (str[i - 1] != '\0')
	{
		if (str[i] == symbol)
			return (str + i);
		i++;
	}
	return (NULL);
}

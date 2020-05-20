/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/20 20:53:03 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_check (char const *s, char c)
{
	int		start;
	
	if (s == NULL)
		return(-2);
	while (s[start] == c)
		start++;
	if (s[start] == '\0')
		return (-1);
	return(start); 
}

char		**ft_createmassive(int words, int symbols)
{
	char	**split;
	
	if (words == 0 && symbols == 0)
	{
		split = (char**)malloc(2 * sizeof(char *));
		split[0] = (char *)malloc(sizeof(char) * 1);
		split[0] = "\0";
		split[1] = NULL;
		return (split);
	}
	else
		return(NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
//	size_t	len_begin;
//	size_t	len_end;
	
	start = ft_check (s, c);
	if (start == -2)
		return (NULL);
	if (start == -1)
		split = ft_createmassive (0, 0);
//	else
//	{
//		ft_createmassive(s, start, 
//	}
	return (split);
}

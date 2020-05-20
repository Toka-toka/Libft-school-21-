/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/21 01:35:26 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

#include <stdio.h>

/* int			ft_check (char const *s, char c)
{
	int		start;
	
	if (s == NULL)
		return(-2);
	while (s[start] == c)
		start++;
	if (s[start] == '\0')
		return (-1);
	return(start); 
}	*/

int ft_countword (char const *s, char c)
{
			int count;

			count = 0;
			while (*s != '\0')
			{
				while(*s == c)
					s++;
				if(*s != c && *s != '\0')
					count++;
				while(*s != c && *s != '\0')
					s++;
			}
			return (count);
}

/*char		**ft_createmassive(int words, int symbols)
{
	char	**split;
	
	if (words == 0 && symbols == 0)
	{
		split = (char**)malloc(2 * sizeof(char *));
		split[0] = (char *)malloc(sizeof(char) * 1);
		split[0] = "\0";
		split[1] = NULL;
	}
	else
		return(split);*/
//}

int		ft_split(char const *s, char c)
{
//	char	**split;
//	int		start;
	int		count_word;
//	size_t	len_begin;
//	size_t	len_end;
	
//	start = ft_check (s, c);
	count_word = ft_countword(s, c);
	printf("word = %d", count_word);
	
/*	if (start == -2)
		return (NULL);
	if (start == -1)
		split = ft_createmassive (0, 0);
	else
	{
		ft_createmassive(s, start, 
	}*/
	return (0);// (split);
}

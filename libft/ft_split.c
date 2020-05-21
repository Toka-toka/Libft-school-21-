/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/22 00:51:32 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int		*ft_wordsearch(char const *s, int *arr, char c)
{
	arr[0] = arr[0] + arr[1];
	arr[1] = 0;
	while(s[arr[0]] == c)
		arr[0]++;
	while (s[arr[0] + arr[1]] != c && s[arr[0] + arr[1]] != '\0')
		arr[1]++;
	return(arr);
}

void	ft_cubalibre(int *app, char **split, int i)
{
	free (app);
	while (i > 0 , i--)
		free (split[i]);
	free(split);
}

char		**ft_mallocmaster(int words, char const *s, char c)
{
	char			**split;
	int				i;
	int				*arr;
	if (words == 0)
		return(NULL);
	i = 0;
	arr = malloc(sizeof(int)*2);
	arr[0] = 0;
	arr[1] = 0;		
	split = (char**)malloc((words + 1)* sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (i < words)
	{
		ft_wordsearch(s, arr, c);
		split[i] = ft_substr(s, (unsigned int)arr[0], (size_t)arr[1]);
		if (split[i] == NULL)
		{	
			ft_cubalibre(arr, split, i);
				return (NULL);
		}
		i++;
	}
	split[words] = NULL;
		return(split);
}

char		**ft_split(char const *s, char c)
{
	char	**split;
	int		words;
	
	if (s == NULL)
		return(NULL);
	words = ft_countword(s, c);
	split = ft_mallocmaster(words, s, c);
	return (split);
}

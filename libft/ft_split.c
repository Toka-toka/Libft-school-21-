/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:13:04 by sedric            #+#    #+#             */
/*   Updated: 2020/05/23 13:50:48 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_countword(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
			count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (count);
}

int			*ft_wordsearch(char const *s, int *arr, char c)
{
	arr[0] = arr[0] + arr[1];
	arr[1] = 0;
	while (s[arr[0]] == c)
		arr[0]++;
	while (s[arr[0] + arr[1]] != c && s[arr[0] + arr[1]] != '\0')
		arr[1]++;
	return (arr);
}

void		ft_cubalibre(int *app, char **split, int i)
{
	free(app);
//	i--;
	while (i >= 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
}

char		**ft_mallocmaster(int words, char const *s, char c)
{
	char	**split;
	int		i;
	int		*arr;

	split = (char**)malloc((words + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	arr = ft_calloc(sizeof(int), 2);
	i = 0;
	while (i < words || i == 0)
	{
		ft_wordsearch(s, arr, c);
//		if (i != 3)
		split[i] = ft_substr(s, (unsigned int)arr[0], (size_t)arr[1]);
//		else
//			split[i] = NULL;
//		printf("split[%d] = %c", i, split[0][0]);
		if (split[i] == NULL)
		{
//			printf("Hello!");
			ft_cubalibre(arr, split, i);
			return (split);
		}
		i++;
	}
//	free(arr);
	split[words] = NULL;
//	printf("split[%d] = %s", 0, split[0]);
	return (split);
}

char		**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	if (s == NULL)
		return (NULL);
	words = ft_countword(s, c);
//	if (words != 0)
	split = ft_mallocmaster(words, s, c);
//	else
//	{
//		split = (char**)malloc((1) * sizeof(char *));
//		split[0] = NULL;
//	}
	return (split);
}

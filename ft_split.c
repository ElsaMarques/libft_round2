/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:21:06 by ede-oliv          #+#    #+#             */
/*   Updated: 2023/01/07 05:21:52 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	arr = NULL;
	return (arr);
}

static int	ft_start_point(const char *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
}

static int	ft_word_count(const char *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (i == 0 && s[0] != c)
			words++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		i;
	int		start;
	int		ii;

	i = 0;
	ii = 0;
	if (!s)
		return (NULL);
	splited = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!splited)
		return (NULL);
	while (ft_word_count(s, c) > ii)
	{
		start = ft_start_point(s, c, i);
		i = start;
		while (s[i] && s[i] != c)
			i++;
		splited[ii] = ft_substr(s, start, i - start);
		if (!splited[ii])
			return (ft_free_arr(splited));
		ii++;
	}
	splited[ii] = NULL;
	return (splited);
}

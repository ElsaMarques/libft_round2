/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <ede-oliv@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 00:27:21 by ede-oliv          #+#    #+#             */
/*   Updated: 2023/01/07 15:27:09 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	is_set(char const *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static size_t	define_start(char const *s1, char const *set)
{
	size_t	res;

	res = 0;
	while (s1[res] && is_set(set, s1[res]))
		res++;
	return (res);
}

static size_t	define_end(char const *s1, char const *set)
{
	size_t	res;

	res = ft_strlen(s1);
	if (!res)
		return (0);
	else
		res--;
	while (res && is_set(set, s1[res]))
		res--;
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = define_start(s1, set);
	end = define_end(s1, set);
	if (start >= end)
		len = end - start;
	else
		len = 0;
	return (ft_substr(s1, start, end - start + 1));
}

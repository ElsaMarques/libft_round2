/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <ede-oliv@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 00:09:04 by ede-oliv          #+#    #+#             */
/*   Updated: 2022/12/19 00:09:04 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*merge;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	merge = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!merge)
		return (NULL);
	while (*s1 != '\0')
	{
		merge[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		merge[i] = *s2;
		s2++;
		i++;
	}
	merge[i] = '\0';
	return (merge);
}

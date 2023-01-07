/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <ede-oliv@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:53:13 by ede-oliv          #+#    #+#             */
/*   Updated: 2022/12/02 03:53:13 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cast_s;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		cast_s = (unsigned char *)s;
		if (cast_s[i] == (unsigned char)c)
			return ((void *)(cast_s + i));
		i++;
	}
	return (NULL);
}

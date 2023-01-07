/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <ede-oliv@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:03:50 by ede-oliv          #+#    #+#             */
/*   Updated: 2022/12/28 21:03:50 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh_str;
	size_t	i;

	i = 0;
	if (s && f)
	{
		fresh_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
		if (!fresh_str)
			return (NULL);
		while (s[i])
		{
			fresh_str[i] = f(i, s[i]);
			i++;
		}
		fresh_str[i] = '\0';
		return (fresh_str);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <ede-oliv@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:01:46 by ede-oliv          #+#    #+#             */
/*   Updated: 2022/12/21 03:01:46 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_s;
	unsigned char	*temp_d;
	size_t			i;

	i = 0;
	temp_s = (unsigned char *)src;
	temp_d = (unsigned char *)dest;
	if (temp_d <= temp_s)
	{	
		while (n > i && (dest != NULL || src != NULL))
		{
			temp_d[i] = temp_s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			temp_d[n] = temp_s[n];
		}
	}
	return (dest);
}

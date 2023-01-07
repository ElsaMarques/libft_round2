/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <ede-oliv@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 02:17:42 by ede-oliv          #+#    #+#             */
/*   Updated: 2023/01/07 16:10:32 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	index;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	p = (void *)malloc(size * count);
	if (p == NULL)
		return (NULL);
	index = 0;
	while (index < (count * size))
	{
		*((char *)p + index) = 0;
		index++;
	}
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <ede-oliv@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:03:21 by ede-oliv          #+#    #+#             */
/*   Updated: 2022/12/16 19:03:21 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*cast_s;

	i = 0;
	cast_s = (unsigned char *)s;
	if (n == 0)
		return ;
	while (i < n)
	{	
		cast_s[i] = 0;
		i++;
	}
}

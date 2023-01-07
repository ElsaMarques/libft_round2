/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <ede-oliv@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 02:52:28 by ede-oliv          #+#    #+#             */
/*   Updated: 2023/01/07 18:01:40 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_length(int n)
{
	int	number;
	int	digit;

	number = n;
	if (n < 0)
		digit = 1;
	else
		digit = 0;
	while (number / 10 != 0)
	{
		number = number / 10;
		digit++;
	}
	digit++;
	return (digit);
}

void	*ft_memalloc(size_t size)
{
	unsigned char	*fresh_mem;

	fresh_mem = (unsigned char *)malloc(size);
	if (!fresh_mem)
		return (NULL);
	ft_bzero(fresh_mem, size);
	return ((void *)fresh_mem);
}

char	*ft_strnew(size_t size)
{
	return (ft_memalloc(size + 1));
}

char	*ft_strcpy(char *copy, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		full_dig;
	int		nbr;

	full_dig = nbr_length(n);
	str = ft_strnew(full_dig);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
		nbr = -n;
	else
		nbr = n;
	while (full_dig-- > 0)
	{
		if (nbr < 10)
			str[full_dig] = nbr + '0';
		else
			str[full_dig] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

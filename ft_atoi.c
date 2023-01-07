/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <ede-oliv@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 01:01:58 by ede-oliv          #+#    #+#             */
/*   Updated: 2023/01/07 16:38:02 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *c)
{
	int		i;
	int		pos_neg;
	long	newint;

	i = 0;
	pos_neg = 1;
	newint = 0;
	while (c[i] == ' ' || c[i] == '\n' || c[i] == '\t' || c[i] == '\f'
		|| c[i] == '\r' || c[i] == '\v')
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-' )
			pos_neg = -1;
		i++;
	}
	while (c[i] >= '0' && c[i] <= '9')
	{
		newint = newint * 10 + c[i] - '0';
		i++;
	}
	return (newint * pos_neg);
}

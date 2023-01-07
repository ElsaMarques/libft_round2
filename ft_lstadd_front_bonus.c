/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:32:08 by ede-oliv          #+#    #+#             */
/*   Updated: 2023/01/07 05:33:01 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*orig_head;

	if (!lst || !new)
		return ;
	orig_head = *lst;
	*lst = new;
	new->next = orig_head;
}

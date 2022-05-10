/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <averdu-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:43:47 by averdu-m          #+#    #+#             */
/*   Updated: 2022/05/10 19:11:27 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	while (*lst)
	{
		del((*lst)->content);
		aux = (*lst)->next;
		free((*lst));
		(*lst) = aux;
	}
	*lst = NULL;
}

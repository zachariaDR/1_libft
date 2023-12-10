/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:13:41 by zadriouc          #+#    #+#             */
/*   Updated: 2023/12/09 21:44:28 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !(*lst) || !del)
		return ;
	while ((*lst)->next != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = tmp;
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
}

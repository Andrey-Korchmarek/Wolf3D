/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:54:46 by mashley           #+#    #+#             */
/*   Updated: 2019/09/25 13:14:53 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_list;
	t_list		*tmp_list;

	if (!lst)
		return (NULL);
	tmp_list = f(lst);
	new_list = tmp_list;
	while (lst->next)
	{
		lst = lst->next;
		tmp_list->next = f(lst);
		if (!tmp_list->next)
		{
			free(tmp_list->next);
			return (NULL);
		}
		tmp_list = tmp_list->next;
	}
	return (new_list);
}

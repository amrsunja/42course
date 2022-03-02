/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:52:30 by aazdoev           #+#    #+#             */
/*   Updated: 2022/02/28 12:56:34 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_list;

	if (!lst || !*lst || !del)
		return ;
	while (lst && *lst)
	{
		temp_list = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_list;
	}
}

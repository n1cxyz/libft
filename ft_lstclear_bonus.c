/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:43:45 by dasal             #+#    #+#             */
/*   Updated: 2024/04/30 20:34:27 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}

/* int	main(void)
{
	t_list *list = NULL;

	ft_lstadd_back(&list, ft_lstnew("hello"));
	ft_lstadd_back(&list, ft_lstnew("world"));
	ft_lstadd_back(&list, ft_lstnew("!"));

	t_list *temp = list;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	ft_lstclear(&list, free);

	if (list == NULL)
		printf("List cleared\n");
	else
		printf("List not cleared\n");
	return (0);
}
 */
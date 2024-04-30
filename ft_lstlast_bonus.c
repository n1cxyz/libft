/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:29:51 by dominicasal       #+#    #+#             */
/*   Updated: 2024/04/30 19:29:22 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	t_list *list = NULL;

	ft_lstadd_front(&list, ft_lstnew("hello"));
	ft_lstadd_front(&list, ft_lstnew("world"));
	ft_lstadd_front(&list, ft_lstnew("!"));

	t_list *last_node = ft_lstlast(list);

	printf("%s\n", (char *)last_node->content);
}*/
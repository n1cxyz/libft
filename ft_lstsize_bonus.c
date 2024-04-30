/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:20:31 by dominicasal       #+#    #+#             */
/*   Updated: 2024/04/30 19:35:18 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/*int	main(void)
{
	t_list *list = NULL;

	ft_lstadd_front(&list, ft_lstnew("hello"));
	ft_lstadd_front(&list, ft_lstnew("world"));
	ft_lstadd_front(&list, ft_lstnew("!"));

	printf("%d\n", ft_lstsize(list));
}*/
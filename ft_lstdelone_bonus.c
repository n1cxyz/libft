/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:54:06 by dominicasal       #+#    #+#             */
/*   Updated: 2024/04/30 15:19:50 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
}

/* int	main(void)
{
	t_list *list = ft_lstnew("hello"));
	printf("before%s\n", (char *)node->content);
	ft_lstdelone(node, free);
	if (node == NULL)
		printf("deleted succesfully\n");
	else
		printf("not deleted\n");


	return (0);
}
 */
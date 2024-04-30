/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:51:49 by dasal             #+#    #+#             */
/*   Updated: 2024/04/30 13:58:54 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int	main(void)
{
	int	num1 = 10;
	int num2 = 20;

	t_list *node1 = ft_lstnew(&num1);
	t_list *node2 = ft_lstnew(&num2);

	if (node1 && node2)
	{
		printf("%d\n", *(int *)node1->content);
		printf("%d\n", *(int *)node2->content);
		printf("%ld\n", ft_strlen("hello"));
	}
	else
		printf("Error");
}  */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:45:52 by dasal             #+#    #+#             */
/*   Updated: 2024/05/02 12:18:42 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
void del_content(void *content)
{
	free(content);
}

void *ft_strtoupper(void *content)
{
	char *str = (char *)content;
	char *result = ft_strdup(str);
	if (result == NULL)
		return NULL;
	for (int i = 0; result[i] != '\0'; i++)
		result[i] = ft_toupper(result[i]);
	return result;
}

int main(void)
{
	t_list *list = NULL;

	ft_lstadd_back(&list, ft_lstnew("hello"));
	ft_lstadd_back(&list, ft_lstnew("world"));

	t_list *new_lst = ft_lstmap(li  st, &ft_strtoupper, &free);

	for (t_list *node = new_lst; node != NULL; node = node->next)
	{
		char *str = (char *)node->content;
		printf("%s\n", str);
	}

}
*/
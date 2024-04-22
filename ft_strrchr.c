/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:29:44 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:20:19 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int			i;
	char const	*res;

	i = 0;
	res = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			res = str + i;
		}
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)str + i);
	return ((char *)res);
}

/* int	main(void)
{
	char	str[] = "hello, world!";
	char	c = '?';
	char	*result;

	result = ft_strrchr(str, c);
	if (result == NULL)
		printf("not found");
	else
		("%s", result);
} */

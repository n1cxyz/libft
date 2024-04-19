/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:36:41 by dasal             #+#    #+#             */
/*   Updated: 2024/04/17 17:41:34 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char const *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (NULL);
}
/* 
int	main(void)
{
	char	str[] = "Hello, World!";
	char	ch = '?';
	char	*result;

	result = ft_strchr(str, ch);
	if (result == NULL)
		printf("not found");
	else
		printf("%s", result);
}
 */
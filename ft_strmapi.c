/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:27:16 by dominicasal       #+#    #+#             */
/*   Updated: 2024/04/21 23:15:50 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static char	ft_toupper(unsigned int i, char c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	len--;
	while (len >= 0)
	{
		result[len] = f(len, s[len]);
		len--;
	}
	return (result);
}
/*
int	main(void)
{
	char	str[] = "hello, world!";
	char	*result = ft_strmapi(str, ft_toupper);
	printf("%s\n", result);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:02:08 by dasal             #+#    #+#             */
/*   Updated: 2024/04/20 16:08:33 by dasal            ###   ########.fr       */
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

static size_t	char_check(char const c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_strlcpy(char *dest, char const *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (src[j] != '\0' && j < size - 1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	while (char_check(*s1, set) == 1 && s1)
		s1++;
	len = ft_strlen(s1);
	while (char_check(s1[len - 1], set) == 1 && len)
		len--;
	result = (char *)malloc(sizeof(char) * (len - 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len + 1);
	return (result);
}
/* 
int	main(void)
{
	char	str[] = "   Hello, World!   ";
	char	set[] = " ";
	printf("%s", ft_strtrim(str, set));
} */

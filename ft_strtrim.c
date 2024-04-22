/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:02:08 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:31:05 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:02:08 by dasal             #+#    #+#             */
/*   Updated: 2024/04/24 13:20:42 by dasal            ###   ########.fr       */
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
	while (s1 && char_check(*s1, set) == 1)
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && char_check(s1[len - 1], set) == 1)
		len--;
	result = (char *)malloc(sizeof(char) * (len + 1));
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:09:23 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:19:18 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static char	*word(char const *s, char c)
{
	int		i;
	char	*result;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	result = (char *)malloc(sizeof(char) * (i + 1));
	result[i] = '\0';
	i--;
	while (i >= 0)
	{
		result[i] = s[i];
		i--;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr = NULL;
	result = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			result[j] = word(s + i, c);
			j++;
		}
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	result[j] = ptr;
	return (result);
}
/* 
int	main(void)
{
	char	str[] = "  hello how are you today ";
	char	c = 32;
	int		i = 0;
	char	**result = ft_split(str, c);

	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
} */

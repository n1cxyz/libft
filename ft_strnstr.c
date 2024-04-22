/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:10:55 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:20:14 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;

	j = 0;
	if (!haystack && !len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		while (*(haystack + j) == *(needle + j) && j < len && *(needle + j))
		{
			if (!*(needle + j + 1))
				return ((char *)haystack);
			j++;
			j = 0;
		}
		haystack++;
	}
	return (NULL);
}

/*  int	main(void)
{
	char	haystack[] = ("Hello how are you");
	char	needle[] = ("z");
	char	*result = ft_strnstr(haystack, needle, 20);

	if (result != NULL)
		printf("%s\n", result);
	else
		printf("Needle not found\n");
} */

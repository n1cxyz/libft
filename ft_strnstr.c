/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:10:55 by dasal             #+#    #+#             */
/*   Updated: 2024/04/24 12:58:58 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;

	if (!haystack && !len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		j = 0;
		while (*(haystack + j) == *(needle + j) && *(needle + j) && j < len)
		{
			if (!*(needle + j + 1))
				return ((char *)haystack);
			j++;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	haystack[] = ("aaabcabcd");
	char	needle[] = ("aaabc");
	char	*result = ft_strnstr(haystack, "a", 1);

	if (result != NULL)
		printf("%s\n", result);
	else
		printf("Needle not found\n");
}  */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:16:54 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:19:44 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	k = 0;
	while (dst[j] != '\0')
		j++;
	dlen = j;
	while (src[k] != '\0')
		k++;
	slen = k;
	if (size <= dlen || size == 0)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}
/*
int	main(void)
{
	char	src[] = "how are you";
	char	dst[] = "hello ";

	printf("%ld\n", ft_strlcat(dst, src, 13));
	printf("%s\n", dst);
}
*/
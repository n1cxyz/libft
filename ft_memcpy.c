/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:32:07 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:18:36 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ptr;

	ptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
	{
		*(char *)dest++ = *(char *)src++;
	}
	return (ptr);
}

/* int	main(void)
{
	char src[] = "hello how are you";
	char dest[20];

	ft_memcpy(dest, src, 20);
	printf("%s\n", dest);
} */

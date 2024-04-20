/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:55:59 by dasal             #+#    #+#             */
/*   Updated: 2024/04/19 09:26:40 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)str1 != *(unsigned char *)str2)
		{
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		}
		str1 = (unsigned char *)str1++;
		str2 = (unsigned char *)str2++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%d", ft_memcmp("abcdef", "aBCDEF", 10));
} */

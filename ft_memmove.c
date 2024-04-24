/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:58:07 by dasal             #+#    #+#             */
/*   Updated: 2024/04/24 13:00:50 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*lastd;
	const char	*lasts;

	d = dest;
	s = src;
	lastd = d + (len - 1);
	lasts = s + (len - 1);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str[] = ""
}
*/
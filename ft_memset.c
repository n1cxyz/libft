/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:01:52 by dasal             #+#    #+#             */
/*   Updated: 2024/04/20 12:25:31 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	void	*ptr;

	ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (ptr);
}

/* int	main(void)
{
	char	str[] = "Hello how are you today";
	printf("%s\n", str);
	ft_memset(str, '$', 5);
	printf("%s\n", str);
} */

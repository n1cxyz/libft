/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:02:19 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:17:41 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}
/* 
int	main(void)
{
	char	str[] = "hello how are you";
	printf("%s\n", str);

	ft_bzero(str, 5);

	unsigned int	i = 0;
	while (i < sizeof(str))
	{
		printf("%d ", (int)str[i]);
		i++;
	}
} */

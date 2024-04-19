/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:02:19 by dasal             #+#    #+#             */
/*   Updated: 2024/04/18 14:35:11 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

/* int	main(void)
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

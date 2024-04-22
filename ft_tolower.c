/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:33:21 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:21:12 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
/* 
int	main(void)
{
	char	str[] = "HELLO";
	int		i = 0;

	while (i < 5)
	{
		printf("%c", (char)ft_tolower(str[i]));
		i++;
	}
}
 */
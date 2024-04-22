/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:31:52 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:21:19 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

/* int	main(void)
{
	char	str[] = "hello";
	int		i = 0;

	while (i < 5)
	{
		printf("%c", (char)ft_toupper(str[i]));
		i++;
	}
}
 */
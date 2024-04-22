/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:10:52 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:18:20 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	long	nb;

	nb = n;
	i = ft_intlen(n);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	result[i] = '\0';
	i--;
	result[0] = '0';
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		result[i] = '0' + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
}
*/

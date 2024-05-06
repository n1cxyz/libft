/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:23:40 by dasal             #+#    #+#             */
/*   Updated: 2024/05/04 14:23:52 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(long n)
{
	int	count;

	count = n;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
	{
		ft_putchar(n + '0');
	}
	return (ft_intlen(count));
}
/* 
int	main(void)
{
	int	result;

	result = printf(",%d\n", ft_putnbr(1337));
} */
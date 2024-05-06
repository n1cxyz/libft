/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:21:54 by dasal             #+#    #+#             */
/*   Updated: 2024/05/04 15:22:02 by dasal            ###   ########.fr       */
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
		n /= 16;
		count++;
	}
	return (count);
}

int	ft_putnbr_hexl(long n)
{
	int	count;

	count = n;
	if (n > 15)
	{
		ft_putnbr_hexl(n / 16);
		ft_putnbr_hexl(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
			ft_putchar(n - 10 + 'a');
	}
	return (ft_intlen(count));
}

/* int	main(void)
{
	int	result;

	result = printf(",%d\n", ft_putnbr_hexl(1000));
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:10:52 by dasal             #+#    #+#             */
/*   Updated: 2024/04/20 17:12:19 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_intlen(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	if (count == 0)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	i = ft_intlen(n);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	result[i] = '\0';
	i--;
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	if (n > 0)
	{
		while (i >= 0)
		{
			result[i] = '0' + (n % 10);
			n = n / 10;
			i--;
		}
	}
	else
		result[0] = '0';
	return (result);
}

int	main(void)
{
	//printf("%s\n", ft_itoa(1337));
	printf("%s\n", ft_itoa(-42));
}

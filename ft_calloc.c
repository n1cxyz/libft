/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:16:20 by dasal             #+#    #+#             */
/*   Updated: 2024/04/24 13:43:13 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			n;
	void			*memory;
	unsigned char	*ptr;

	if (nmemb && size && nmemb > (UINT_MAX / size))
		return (NULL);
	n = nmemb * size;
	memory = malloc(n);
	if (memory == NULL)
		return (NULL);
	ptr = (unsigned char *)memory;
	while (n--)
		*ptr++ = 0;
	return (memory);
}

/* int	main(void)
{
	int		*array;
	size_t	n;
	size_t	i;

	n = 5;
	i = 0;
	array = ft_calloc(1000000000000, sizeof(int));
	if (array == NULL)
	{
		printf("failed");
		return (1);
	}
	else
	{
		while (i < n)
		{
			printf("%d ", array[i]);
			i++;
		}
	}
	free(array);
	return (0);
} */

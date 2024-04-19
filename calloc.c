/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:16:20 by dasal             #+#    #+#             */
/*   Updated: 2024/04/19 12:11:31 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			n;
	void			*memory;
	unsigned char	*ptr;

	n = nmemb * size;
	memory = (void *)malloc(n);
	if (memory == NULL)
		return (NULL);
	ptr = (unsigned char *)memory;
	while (n--)
		*(unsigned char *)memory++ = 0;
	return (ptr);
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

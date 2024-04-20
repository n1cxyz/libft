/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:12:39 by dasal             #+#    #+#             */
/*   Updated: 2024/04/19 13:43:05 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dst;
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	while (i < len)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/* 
int	main(void)
{
	char	str[] = "hello";
	char	*duplicate = ft_strdup(str);
	printf("%s\n", duplicate);
	free(duplicate);
} */

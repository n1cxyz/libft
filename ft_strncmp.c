/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dominicasal <dominicasal@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:24:10 by dasal             #+#    #+#             */
/*   Updated: 2024/04/22 22:20:10 by dominicasal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && i < n)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("aaa", "bbb", 0));
}
*/
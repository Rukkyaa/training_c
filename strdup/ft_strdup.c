/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:50:16 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/06/10 17:57:46 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *string)
{
	size_t	len;

	len = 0;
	while (string[len] != '\0')
	{
		len ++;
	}
	return (len);
}

char	*ft_strdup(const char *string)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(string);
	copy = (char *) malloc(len * sizeof(char) + 1);
	if (copy == NULL)
		return (copy);
	i = 0;
	while (i <= len)
	{
		copy[i] = string[i];
		i ++;
	}
	return (copy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:58:46 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/06/13 17:32:53 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len ++;
	}
	return (len);
}

char	*ft_str_to_lower(const char *str)
{
	char	*str_lower;
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	str_lower = (char *) malloc(len * sizeof(char) + 1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str_lower[i] = str[i] + 32;
		else
			str_lower[i] = str[i];
		i ++;
	}
	return (str_lower);
}

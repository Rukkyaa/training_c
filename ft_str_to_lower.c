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
#include "lib_rukkyaa.h"

char	*ft_str_to_lower(const char *str)
{
	char	*str_lower;
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	str_lower = (char *) malloc(len * sizeof(char) + 1);
	i = 0;
	while (i < len)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str_lower[i] = str[i] + 32;
		else
			str_lower[i] = str[i];
		i ++;
	}
	return (str_lower);
}

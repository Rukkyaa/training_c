/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 01:34:14 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/06/14 01:43:42 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib_rukkyaa.h"

size_t	ft_strcount(char *str, char chr)
{
	size_t	amount;
	size_t	i;

	amount = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
		{
			amount ++;
		}
		i ++;
	}
	return (amount);
}

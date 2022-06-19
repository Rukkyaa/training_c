/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 00:10:26 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/06/12 18:41:39 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib_rukkyaa.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	is_neg;

	i = 0;
	result = 0;
	is_neg = 1;
	if (!str)
		return (0);
	else if (str[i] == '-')
	{
		is_neg = -1;
		i ++;
	}
	while (str[i] != '\0' && str[i] - '0' >= 0 && str[i] - '0' <= 9)
	{
		result = result * 10;
		result += str[i] - '0';
		i ++;
	}
	return (result * is_neg);
}


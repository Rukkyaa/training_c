/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:28:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/05/17 01:46:27 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned long	ft_pow(const unsigned int nb, const unsigned int pow)
{
	unsigned long	i;
	unsigned long	result;

	i = 0;
	result = 1;
	while (i < pow)
	{
		result *= nb;
		i ++;
	}
	return (result);
}

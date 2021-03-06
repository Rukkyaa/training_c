/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:18:58 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/06/12 19:04:31 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib_rukkyaa.h"

unsigned long	ft_factorial(unsigned long nb)
{
	if (nb == 0)
		return (1);
	else
		return (nb * ft_factorial(nb - 1));
}

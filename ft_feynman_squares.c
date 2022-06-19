/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_feynman_squares.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 01:08:31 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/05/18 01:35:09 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib_rukkyaa.h"

unsigned long	ft_feynman_squares(unsigned int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (n * n + ft_feynman_squares(n - 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:18:58 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/06/10 18:54:01 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned long	ft_factorial(unsigned long nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * factorial(nb - 1));
}

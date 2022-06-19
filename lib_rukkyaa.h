/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_rukkyaa.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:06:20 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/06/18 11:09:12 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_RUKKYAA_H
#define LIB_RUKKYAA_H

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str);

unsigned long	ft_factorial(unsigned long nb);

unsigned long	ft_feynman_squares(unsigned int n);

unsigned long	ft_pow(const unsigned int nb, const unsigned int pow);

char	*ft_str_to_lower(const char *str);

char	*ft_remove_whitespaces(const char *str);

char	*ft_str_to_upper(const char *str);

size_t	ft_strcount(char *str, char chr);

char	*ft_strdup(const char *string);

size_t	ft_strlen(const char *str);

#endif


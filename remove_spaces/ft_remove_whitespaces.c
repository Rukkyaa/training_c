/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:31:03 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/05/14 14:52:13 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

size_t	ft_no_space_lenght(char string[])
{
	size_t	lenght;
	size_t	i;

	i = 0;
	lenght = 0;
	while (string[i] != '\0')
	{
		i ++;
		lenght ++;
		if (string[i - 1] == ' ')
		{
			lenght --;
		}
	}
	return (lenght);
}

char	*ft_remove_whitespaces(const char *str)
{
	int		index_no_space;
	int		i;
	size_t	lenght;
	char	*no_space_string;

	lenght = ft_no_space_lenght((char *)str);
	no_space_string = (char *) malloc(lenght * sizeof(char) + 1);
	i = 0;
	index_no_space = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			no_space_string[index_no_space] = str[i];
			index_no_space ++;
		}
		i ++;
	}
	return (no_space_string);
}
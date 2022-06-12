/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 00:10:26 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/06/12 18:25:01 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0' && str[i] - '0' >= 0 && str[i] - '0' <= 9)
	{
		result = result * 10;
		result += str[i] - '0';
		i ++;
	}
	return (result);
}

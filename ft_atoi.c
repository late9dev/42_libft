/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 06:38:06 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 06:55:27 by late9dev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;

	while (ft_isspace(str[i]))
		i++;

	if (str[i] == '+' && str[i + 1] != '-' )
		i++;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] && ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}

	result *= sign;
	return (result);
}
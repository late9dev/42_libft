/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 00:21:07 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/22 01:07:24 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_hexa_lower(unsigned int num)
{
	if (num >= 16)
	{
		ft_put_hexa_lower(num / 16);
		ft_put_hexa_lower(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_print_char(num + '0');
		else
		{
			ft_print_char(num - 10 + 'a');
		}
	}
}

void	ft_put_hexa_upper(unsigned int num)
{
	if (num >= 16)
	{
		ft_put_hexa_upper(num / 16);
		ft_put_hexa_upper(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_print_char(num + '0');
		else
		{
			ft_print_char(num - 10 + 'A');
		}
	}
}

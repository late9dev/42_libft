/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:49:25 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/22 00:32:38 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsigned_nbr(unsigned int nbr);

int	ft_print_unsigned(unsigned int nbr)
{
	int	printed_chars;

	printed_chars = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
	}
	if (nbr == 0)
	{
		printed_chars += ft_print_char('0');
		return (printed_chars);
	}
	else
	{
		printed_chars += ft_print_unsigned_nbr(nbr);
	}
	return (printed_chars);
}

int	ft_print_unsigned_nbr(unsigned int nbr)
{
	int	printed_chars;

	printed_chars = 0;
	if (nbr > 9)
	{
		printed_chars += ft_print_nbr(nbr / 10);
	}
	printed_chars += ft_print_char((nbr % 10) + '0');
	return (printed_chars);
}

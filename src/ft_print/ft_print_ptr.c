/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:34:06 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/22 00:28:54 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_ptr(unsigned long long ptr)
{
	int	printed_chars;

	printed_chars = 0;
	printed_chars += ft_print_str("0x");
	if (ptr == 0)
	{
		printed_chars += ft_print_char('0');
	}
	else
	{
		ft_put_ptr(ptr);
		printed_chars += ft_len_ptr(ptr);
	}
	return (printed_chars);
}

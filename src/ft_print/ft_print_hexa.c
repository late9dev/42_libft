/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:39:19 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/22 00:25:38 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hexa_lower(unsigned int num)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_print_hexa_lower(num);
	return (ft_len_hexa(num));
}

int	ft_print_hexa_upper(unsigned int num)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_print_hexa_upper(num);
	return (ft_len_hexa(num));
}

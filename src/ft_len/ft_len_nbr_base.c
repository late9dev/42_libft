/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:30:10 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/21 22:22:50 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_nbr_base(int nbr, int base)
{
	int				len;
	unsigned int	num;

	len = 0;
	if (nbr < 0)
	{
		len++;
		num = -nbr;
	}
	else
	{
		num = nbr;
	}
	if (num == 0)
	{
		return (1);
	}
	while (num != 0)
	{
		len++;
		num /= base;
	}
	return (len);
}

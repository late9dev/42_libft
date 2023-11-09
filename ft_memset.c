/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:03:09 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 13:54:51 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp_ptr;
	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr) = (unsigned char) c;
		len--;
	}

	return (b);
}

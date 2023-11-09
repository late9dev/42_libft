/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:22:42 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 01:37:19 by late9dev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tmp_dst;
	unsigned char *tmp_src;

	if (dst == (void *) 0 && src == (void *) 0)
	{
		return (dst);
	}

	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;

	while (n > 0)
	{
		*(tmp_dst) = *(tmp_src);
		tmp_dst++;
		tmp_src++;
		n--;
	}
	return (dst);
}

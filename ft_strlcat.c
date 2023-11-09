/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 03:03:56 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 03:52:55 by late9dev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	
	if (dst == NULL && dstsize == 0) {
        return 0;
    }

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	
	if (dst_len >= dstsize)
	{
		dst_len = dstsize;
	}
	if (dst_len == dstsize)
	{
		return (dstsize + src_len);
	}

	if (src_len < dstsize - dst_len)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
	}
	else 
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len -1);
	}

	return (dst_len + src_len);
}

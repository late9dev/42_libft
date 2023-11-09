/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:46:35 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 02:25:29 by late9dev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_src;
	char	*tmp_dst;
	size_t	i;

	if (!dst && !src)
		return (NULL);

	tmp_src = (char *) src;
	tmp_dst = (char *) dst;
	i = -1;

	if (tmp_dst > tmp_src)
	{
		while (len-- > 0)
		{
			tmp_dst[len] = tmp_src[len];
		}
	}
	else 
	{
		while (++i < len)
		{
			tmp_dst[i] = tmp_src[i];
		}
	}
	return (dst);
}
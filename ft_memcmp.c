/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 05:51:39 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 05:58:48 by late9dev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
	size_t	i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;

	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
		{
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		}
		i++;
	}
	return (0);
}

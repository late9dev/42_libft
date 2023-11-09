/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 05:41:36 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 05:50:01 by late9dev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t	i;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;

	while (i < n)
	{
		if (str[i] == uc)
		{
			return ((void *) &str[i]);
		}
		i++;
	}
	return (NULL);
}

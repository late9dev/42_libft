/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 06:22:32 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 06:36:51 by late9dev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;

	if (!haystack && len == 0)
		return (0);

	if (needle[0] == 0)
	{
		return ((char *) haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j) < len)
		{
			j++;
			if (needle[j] == 0)
			{
				return ((char *) haystack + i);
			}
		}
		i++;
		j = 0;
	}
	return (0);
	
}

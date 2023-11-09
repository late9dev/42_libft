/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:02:58 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 07:06:11 by late9dev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc(ft_strlen(s1) + 1);

	if (!dest)
	{
		return (NULL);
	}

	i = 0;

	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}

	dest[i] = 0;

	return (dest);
}

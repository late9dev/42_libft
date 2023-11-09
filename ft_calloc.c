/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 06:58:44 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 07:02:39 by late9dev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t	i;

	i = 0;

	tmp = malloc(count * size);

	if (!tmp)
	{
		return (NULL);
	}

	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

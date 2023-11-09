/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: late9dev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 05:08:54 by late9dev          #+#    #+#             */
/*   Updated: 2023/11/09 05:25:53 by late9dev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char	cc;
	char	*res;
	
	cc = (char) c;

	i = 0;
	res = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == cc)
		{
			res = (char *) &s[i];
		}
		i++;
	}
	if (s[i] == cc)
		res = (char *) &s[i];
	
	return (res);
}

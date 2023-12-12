/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:53:53 by lwarlop           #+#    #+#             */
/*   Updated: 2023/12/06 14:39:56 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*res;

	i = 0;
	res = NULL;
	c = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == c)
		res = (char *) &s[i];
	return (res);
}

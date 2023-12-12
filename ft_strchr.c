/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:18:23 by lwarlop           #+#    #+#             */
/*   Updated: 2023/12/06 14:38:00 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	c = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (!c && s[i] == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

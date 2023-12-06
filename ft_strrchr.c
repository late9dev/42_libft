/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 05:35:39 by lwarlop           #+#    #+#             */
/*   Updated: 2023/12/05 05:36:36 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*res;

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

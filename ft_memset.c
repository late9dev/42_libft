/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:12:54 by lwarlop           #+#    #+#             */
/*   Updated: 2023/11/09 14:24:57 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr = b;
	unsigned long buffer;

	buffer = (unsigned char) c;
	buffer |= buffer << 8;
	buffer |= buffer << 16;
	buffer |= buffer << 32;

	while ((unsigned long) ptr & (sizeof(buffer) - 1) && len)
	{
		*ptr++ = (unsigned char) c;
		len--;
	}
	
	unsigned long *ptr_long = (unsigned long *)ptr;
    
	while (len >= sizeof(buffer))
    {
		*ptr_long++ = buffer;
		len -= sizeof(buffer);
	}
	
	ptr = (unsigned char *)ptr_long;
	while (len--)
	{
		*ptr++ = (unsigned char)c;
	}
	
	return (b);
}

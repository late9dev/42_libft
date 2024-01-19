/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:12:39 by lwarlop           #+#    #+#             */
/*   Updated: 2024/01/19 03:28:03 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	total_size;

	total_size = count * size;
	if (count != 0 && size != 0 && total_size / count != size)
		return (NULL);
	tmp = malloc(total_size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, total_size);
	return (tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:25:14 by lwarlop           #+#    #+#             */
/*   Updated: 2023/11/09 20:52:07 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;
    size_t  s_len;

    if (!s)
        return (NULL);

    // Calcul de la longueur de s pour ne pas dépasser
    s_len = 0;
    while (s[s_len])
        s_len++;

    // Si start est au-delà de la fin de s, renvoyer une chaîne vide
    if (start >= s_len)
        return (malloc(1));  // Assurez-vous d'initialiser à '\0'

    // Ajuste len si start + len dépasse la fin de s
    if (len > s_len - start)
        len = s_len - start;

    // Allocation de la sous-chaîne avec la taille correcte + 1 pour '\0'
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);

    // Copie de la sous-chaîne
    i = 0;
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';  // N'oubliez pas le caractère nul à la fin

    return (substr);
}


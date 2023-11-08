/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:46:41 by lwarlop           #+#    #+#             */
/*   Updated: 2023/11/08 13:20:26 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void    ft_putchar(char c);
void    ft_putstr(const char *s);
void    ft_putnbr(int nb);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);

#endif
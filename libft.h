/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:46:41 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/22 00:32:43 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* FT_IS */
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);

/* FT_TO */
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

/* FT_STR */
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_substr(const char *s, unsigned int start, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* FT_LEN */
int		ft_len_nbr_base(int nbr, int base);
int		ft_len_nbr(int nbr);
size_t	ft_strlen(const char *s);
int		ft_len_hexa(unsigned int num);
int		ft_len_ptr(unsigned long long num);

/* FT_MEM */
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);

/* FT_PUT */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_base(unsigned long long int n, char *base);
void	ft_put_hexa_lower(unsigned int num);
void	ft_put_hexa_upper(unsigned int num);
void	ft_put_ptr(unsigned long long num);

/* FT_PRINT */
int		ft_print_char(int c);
int		ft_print_str(char *str);
int		ft_print_percent(void);
int		ft_print_hexa_lower(unsigned int num);
int		ft_print_hexa_upper(unsigned int num);
int		ft_print_nbr(int nbr);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_unsigned(unsigned int nbr);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:23:58 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:57:10 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalnum(int x);
int		ft_isalpha(int x);
int		ft_isascii(int x);
int		ft_isdigit(int x);
int		ft_isprint(int x);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *a, int x, size_t v);
void	ft_bzero(void *a, size_t v);
void	*ft_memcpy(void *ds, const void *src, size_t v);
void	*ft_memmove(void *ds, const void *sr, size_t v);
size_t	ft_strlcpy(char *ds, const char *sr, size_t dsv);
size_t	ft_strlcat(char *ds, const char *sr, size_t dssize);
int		ft_toupper(int x);
int		ft_tolower(int x);
char	*ft_strchr(const char *str, int x);
char	*ft_strrchr(const char *str, int x);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void *str, int x, size_t v);
int		ft_memcmp(const void *str1, const void *str2, size_t v);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *s);
void	*ft_calloc(size_t c, size_t s);
char	*ft_strdup(const char *str1);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
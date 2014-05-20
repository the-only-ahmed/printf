/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 16:41:40 by ael-kadh          #+#    #+#             */
/*   Updated: 2013/12/12 17:28:23 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
int		ft_putstr(char const *str);
void	ft_putnbr(int n);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *str);
int		ft_point(char const *str, int *i, int x, char *c);
int		ft_putunsigned_int(unsigned int n, int base);
int		ft_putunsigned_long(void *p, int base);
int		ft_putunsigned_2long(unsigned long long n);
int		ft_printpointeur(void *p);
int		condition(const char *str, int *i, va_list ap);
int		ft_abs(int x);
int		ft_all(const char *str, int *i, va_list ap);
int		ft_isascii(int c);
int		ft_all_2(int *i, const char *str, int x, int next);
int		first_else(int x, int next, char str, char c);
int		second_else(int x, int next, char str, char c);

int		ft_cond_2(const char *str, int *i, va_list ap);
int		ft_cond_1(const char *str, int *i, va_list ap, int x);
int		ft_cond_1c(int length, const char *str, int *i, va_list ap);
int		ft_cond_3(const char *str, int *i, int x);
int		ft_cond_3c(const char *str, int *i, int x);
int		condition_2(const char *str, int *i, va_list ap);
int		condition_3(const char *str, int *i, va_list ap);
int		condition_4(const char *str, int *i, va_list ap);

#endif /* FT_PRINTF_H */
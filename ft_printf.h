/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 19:16:50 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/22 13:55:38 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char *inputstrings, ...);

void	ft_spec_conv(char *a, va_list arguments);
void	ft_conv_c(va_list arguments);
void	ft_conv_s(va_list arguments);
void	ft_conv_p(va_list arguments);
void	ft_conv_di(va_list arguments);
void	ft_conv_u(va_list arguments);
void	ft_conv_x(va_list arguments);
void	ft_conv_x2(va_list arguments);
char	*ft_itoa_printf(long int n, int base);
char	*ft_utoa_printf(unsigned long int n, int base, char c);
void	ft_putchar(int c);
void	ft_putstr(char *s);
int		ft_count(int plus);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);

#endif

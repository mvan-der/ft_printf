/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 19:16:50 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/14 16:31:29 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char *inputstrings, ...);
int		ft_count(int plus);
int		spec_check(char *input);
int		spec_conv(int a, va_list arguments);
void	conversion(char *conv, va_list arguments);
void	conv_c(va_list arguments);
void	conv_s(va_list arguments);
void	conv_p(va_list arguments);
void	conv_di(va_list arguments);
void	conv_u(va_list arguments);
void	conv_x(va_list arguments);
void	conv_x2(va_list arguments);
void	ft_putchar(int c);
void	ft_putstr(char *s);
char	*ft_itoa(long int n, int base, char c);

#endif

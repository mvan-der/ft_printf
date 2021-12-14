/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 17:16:41 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/14 14:54:23 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "./libft/libft.h"

int		spec_check(char *input);
void	conv_c(va_list arguments);
void	conv_s(va_list arguments);
void	conv_p(va_list arguments);
void	conv_di(va_list arguments);
void	conv_u(va_list arguments);
void	conv_x(va_list arguments);
void	conv_x2(va_list arguments);
void	ft_putchar(int c);

int	spec_conv(int a, va_list arguments)
{
	if (a == 'c')
		conv_c(arguments);
	if (a == 's')
		conv_s(arguments);
	if (a == 'p')
		conv_p(arguments);
	if (a == 'd')
		conv_di(arguments);
	if (a == 'i')
		conv_di(arguments);
	if (a == 'u')
		conv_u(arguments);
	if (a == 'x')
		conv_x(arguments);
	if (a == 'X')
		conv_x2(arguments);
	if (a == '%')
		ft_putchar ('%');
	return (1);
}

void	conversion(char *conv, va_list arguments)
{
	while (*conv)
	{
		while (*conv != '%')
		{
			ft_putchar(*conv);
			conv++;
		}
		conv++;
		spec_conv(spec_check(conv), arguments);
		conv++;
	}
}

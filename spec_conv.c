/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 17:16:41 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/14 19:06:02 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	spec_conv(char *a, va_list arguments)
{
	a++;
	if (*a == 'c')
		conv_c(arguments);
	else if (*a == 's')
		conv_s(arguments);
	else if (*a == 'p')
		conv_p(arguments);
	else if (*a == 'd')
		conv_di(arguments);
	else if (*a == 'i')
		conv_di(arguments);
	else if (*a == 'u')
		conv_u(arguments);
	else if (*a == 'x')
		conv_x(arguments);
	else if (*a == 'X')
		conv_x2(arguments);
	else if (*a == '%')
		ft_putchar ('%');
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 18:16:10 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/13 19:19:48 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_printf(char *inputstrings, ...)
{
	char		*conv;
	va_list		arguments;

	ft_count(-1);
	va_start (arguments, inputstrings);
	conv = inputstrings;
	conversion(conv, arguments);
	va_end(arguments);
	return (ft_count(0));
}

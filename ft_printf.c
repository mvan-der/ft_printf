/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 18:16:10 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/22 14:02:12 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *inputstrings, ...)
{
	va_list		arguments;

	ft_count(-1);
	va_start (arguments, inputstrings);
	while (*inputstrings)
	{
		if (*inputstrings == '%')
		{
			ft_spec_conv(inputstrings, arguments);
			inputstrings++;
		}
		else
			ft_putchar(*inputstrings);
		inputstrings++;
	}
	va_end(arguments);
	return (ft_count(0));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conv_cdi.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 18:18:31 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/14 13:45:52 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"
#include "ft_printf.h"

void	conv_c(va_list arguments)
{
	int	i;

	i = va_arg(arguments, int);
	ft_putchar (i);
}

void	conv_s(va_list arguments)
{
	char	*s;

	s = va_arg(arguments, char *);
	ft_putstr(s);
}

void	conv_di(va_list arguments)
{
	int		i;
	char	*str;

	i = va_arg(arguments, int);
	if (i < 0)
	{
		i = -i;
		ft_putchar('-');
	}
	str = ft_itoa(i, 10, 'd');
	ft_putstr(str);
	free(str);
}
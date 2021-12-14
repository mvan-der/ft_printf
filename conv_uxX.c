/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conv_uxX.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 17:36:57 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/14 15:07:37 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

void	conv_u(va_list arguments)
{
	unsigned int	j;
	char			*str;

	j = va_arg(arguments, int);
	str = ft_itoa(j, 10, 'u');
	ft_putstr(str);
	free(str);
}

void	conv_x(va_list arguments)
{
	unsigned int	j;
	char			*str;

	j = va_arg(arguments, int);
	str = ft_itoa(j, 16, 'x');
	ft_putstr(str);
	free(str);
}

void	conv_x2(va_list arguments)
{
	unsigned int	j;
	char			*str;

	j = va_arg(arguments, int);
	str = ft_itoa(j, 16, 'X');
	ft_putstr(str);
	free(str);
}

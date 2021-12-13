/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conv_uxX.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 17:36:57 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/13 19:00:51 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"

void	ft_putchar(int c);
void	ft_putstr(char *s);

void	conv_u(va_list arguments)
{
	unsigned int	j;

	j = va_arg(arguments, int);
	ft_putstr(ft_itoa(j, 10, 'u'));
}

void	conv_x(va_list arguments)
{
	unsigned int	j;

	j = va_arg(arguments, int);
	ft_putstr(ft_itoa(j, 16, 'x'));
}

void	conv_x2(va_list arguments)
{
	unsigned int	j;

	j = va_arg(arguments, int);
	ft_putstr(ft_itoa(j, 16, 'X'));
}

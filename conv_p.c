/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conv_p.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 18:47:04 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/13 19:24:10 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"
#include "ft_printf.h"

void	conv_p(va_list arguments)
{
	int	i;

	i = va_arg(arguments, int);
	ft_putstr("pointer");
}

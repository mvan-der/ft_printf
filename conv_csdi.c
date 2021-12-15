/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conv_csdi.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 18:18:31 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/15 16:47:04 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
	if (s == NULL)
		ft_putstr("(null)");
	ft_putstr(s);
}

void	conv_di(va_list arguments)
{
	int		i;
	char	*str;

	i = va_arg(arguments, int);
	str = ft_itoa(i, 10, 'd');
	ft_putstr(str);
	free(str);
}

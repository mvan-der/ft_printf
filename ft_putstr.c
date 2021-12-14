/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/11 20:49:01 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/14 15:08:48 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	write(0, s, ft_strlen(s));
	ft_count(ft_strlen(s));
}

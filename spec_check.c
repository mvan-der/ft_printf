/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   spec_check.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 18:16:40 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/14 18:10:05 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c);

int	spec_check(char *input)
{
	if (*input == 'c')
		return ('c');
	if (*input == 's')
		return ('s');
	if (*input == 'p')
		return ('p');
	if (*input == 'd')
		return ('d');
	if (*input == 'i')
		return ('i');
	if (*input == 'u')
		return ('u');
	if (*input == 'x')
		return ('x');
	if (*input == 'X')
		return ('X');
	if (*input == '%')
		return ('%');
	return (1);
}

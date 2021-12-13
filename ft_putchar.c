/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 17:16:36 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/13 17:17:05 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count(int plus);

void	ft_putchar(int c)
{
	write(0, &c, 1);
	ft_count(1);
}

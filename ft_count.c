/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 17:16:34 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/13 19:19:11 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	reset_count(int count)
{
	if (count == 0)
		return (count);
	count = (count / count) - 1;
	return (count);
}

int	ft_count(int plus)
{
	static int	count = 0;

	if (plus == -1)
	{
		count = reset_count(count);
		return (count);
	}
	count = count + plus;
	return (count);
}

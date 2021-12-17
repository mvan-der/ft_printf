/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa_printf.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 13:08:15 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/17 11:40:09 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

static int	ft_size_n(unsigned long int nb, int base)
{
	size_t	count;

	count = 0;
	if (nb == 0)
	{
		count = 1;
		return (count);
	}
	if (nb < 0)
		count++;
	while (nb != 0)
	{
		nb = nb / base;
		count++;
	}
	return (count);
}

static char	*ft_utoa_magic_lower(unsigned long int nb, int base)
{
	char				*result;
	unsigned long int	i;
	int					mod;

	i = ft_size_n(nb, base) - 1;
	result = ft_calloc(sizeof(char), ft_size_n(nb, base) + 1);
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		nb = nb * -1;
		result[0] = '-';
	}
	while (nb != 0)
	{
		mod = nb % base;
		if (mod > 9)
			result[i] = (mod - 10) + 'a';
		else
			result[i] = mod + '0';
		nb = nb / base;
		i--;
	}
	return (result);
}

static char	*ft_utoa_magic_upper(unsigned long int nb, int base)
{
	char				*result;
	unsigned long int	i;
	int					mod;

	i = ft_size_n(nb, base) - 1;
	result = ft_calloc(sizeof(char), ft_size_n(nb, base) + 1);
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		nb = nb * -1;
		result[0] = '-';
	}
	while (nb != 0)
	{
		mod = nb % base;
		if (mod > 9)
			result[i] = (mod - 10) + 'A';
		else
			result[i] = mod + '0';
		nb = nb / base;
		i--;
	}
	return (result);
}

char	*ft_utoa(unsigned long int n, int base, char c)
{
	char				*str;
	unsigned long int	nb;

	nb = n;
	if (n == 0)
	{
		str = (char *)ft_calloc(sizeof(char), 2);
		if (!str)
			return (NULL);
		str[0] = '0';
		return (str);
	}
	if (c == 'x')
		str = ft_utoa_magic_lower(nb, base);
	else
		str = ft_utoa_magic_upper(nb, base);
	return (str);
}

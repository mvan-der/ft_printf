/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 13:08:15 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/14 13:46:46 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size);

static int	ft_count_n(long int nb, int base)
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

static char	*ft_itoa_magic_lower(long int nb, int base)
{
	char	*result;
	size_t	i;
	int		mod;

	i = ft_count_n(nb, base) - 1;
	result = ft_calloc(sizeof(char), ft_count_n(nb, base) + 1);
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

static char	*ft_itoa_magic_upper(long int nb, int base)
{
	char	*result;
	size_t	i;
	int		mod;

	i = ft_count_n(nb, base) - 1;
	result = ft_calloc(sizeof(char), ft_count_n(nb, base) + 1);
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

char	*ft_itoa(long int n, int base, char c)
{
	char		*str;
	long int	nb;

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
		str = ft_itoa_magic_lower(nb, base);
	else
		str = ft_itoa_magic_upper(nb, base);
	return (str);
}

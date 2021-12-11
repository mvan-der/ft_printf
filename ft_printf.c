/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-der <mvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 14:53:39 by mvan-der      #+#    #+#                 */
/*   Updated: 2021/12/10 16:08:49 by mvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// output has to be written to stdout
// return is number of characters written, if error than negative value
// conversions it must handle: cspdiuxX%

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"
#include <stdio.h>
#include <string.h>

#define UINT_MAX 4294967295

void	ft_putchar(int c)
{
	write(0, &c, 1);
}

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	write(0, s, ft_strlen(s));
}

int	ft_printf(char *inputstrings, ...)
{
	char	*conv;
	int		i;
	int		count;
	char	*s;
	va_list	arguments;

	count = 0;
	va_start (arguments, inputstrings);
	conv = inputstrings;
	while (*conv != '\0')
	{
		while (*conv != '%' && *conv != '\0')
		{
			ft_putchar(*conv);
			conv++;
			count++;
			if (*conv == '\0')
				break ;
		}
		conv++;
		if (*conv == 'c')
		{
			i = va_arg(arguments, int);
			ft_putchar (i);
			count++;
			break ;
		}
		if (*conv == 's')
		{
			s = va_arg(arguments, char *);
			ft_putstr (s);
			count = count + ft_strlen(s);
			break ;
		}
		// if (*conv == 'p') void pointer
		if (*conv == 'd')
		{
			i = va_arg(arguments, int);
			if (i < 0)
			{
				i = -i;
				ft_putchar('-');
			}
			ft_putstr (ft_itoa(i, 10));
			count = count + (ft_strlen(ft_itoa(i, 10)));
			break ;
		}
		if (*conv == 'i') //Input check on hex/oct/dec?
		{
			i = va_arg(arguments, int);
			if (i < 0)
			{
				i = -i;
				ft_putchar('-');
			}
			ft_putstr (ft_itoa(i, 10));
			count = count + (ft_strlen(ft_itoa(i, 10)));
			break ;
		}
		if (*conv == 'u')
		{
			unsigned int j;
			j = va_arg(arguments, int);
			ft_putstr (ft_itoa(j, 10)); //int to string.. need unsigned int to string :/
			count = count + (ft_strlen(ft_itoa(j, 10)));
			break ;
		}
		if (*conv == '%')
		{
			ft_putchar('%');
			count++;
			break ;
		}
	}
	va_end(arguments);
	return (count);
}

int	main(void)
{
	// char	c = 'c';
	// char	*d = "Pizza";
	// int			i;
	// int			j;
	// int			k;
	// int			l;
	// int			m;
	// int			n;
	// int			o;
	unsigned int	p;
	int			q;
	// int			r;
	
	// l = 999;
	// n = 89;
	p = -99;
	// i = ft_printf("1: Hello %c %d", c, d);
	// printf("\n");
	// j = ft_printf("2: I eat %s", d);
	// printf("\n");
	// k = ft_printf("3: 1234567 %%");
	// printf("\n");
	// m = ft_printf("4: 87654321 + %d", l);
	// printf("\n");
	// o = ft_printf("5: Integer says %i", n);
	// printf("\n");
	q = ft_printf("6: Unsigned integer: %u,", p);
	printf("\n");
	// r = ft_printf("7: Just text");
	// printf("\n");
	// printf("1: %i, 2: %i\n", i, j);
	// printf("length output: %d\n", r);
}

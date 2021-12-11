#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"
#include <stdio.h>

int	spec_check(char *input);
int	conv_c(va_list arguments);
int	conv_s(va_list arguments);

int	spec_conv(int a, va_list arguments)
{
	if (a == 'c')
		conv_c(arguments);
	if (a == 's')
		conv_s(arguments);
	// if (a == 'p')
	// 	conv_p(arguments, count);
	// if (a == 'd')
	// 	conv_d(arguments, count);
	// if (a == 'i')
	// 	conv_i(arguments, count);
	// if (a == 'u')
	// 	conv_c(arguments, count);
	// if (a == 'x')
	// 	conv_c(arguments, count);
	// if (a == 'X')
	// 	conv_c(arguments, count);
	if (a == '%')
		ft_putchar ('%');
	return (1);
}

void	conversion(char *conv, va_list arguments)
{
	while (*conv)
	{
		while (*conv != '%')
		{
			ft_putchar(*conv);
			conv++;
		}
		conv++;
		spec_conv(spec_check(conv), arguments);
		conv++;
	}
}

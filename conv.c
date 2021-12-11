#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"
#include <stdio.h>

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
	ft_putstr(s);
}

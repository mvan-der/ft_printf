#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"
#include <stdio.h>

int	conv_c(va_list arguments, int count)
{
	int	i;

	i = va_arg(arguments, int);
	ft_putchar (i);
	count++;
	return (count);
}

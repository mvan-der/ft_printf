#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"
#include <stdio.h>
#include <string.h>

// int	spec_check(char *input);
int	conversion(char *conv, va_list arguments, int count);

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	write(0, s, ft_strlen(s));
}

int	ft_printf(char *inputstrings, ...)
{
	char		*conv;
	static int	count;
	va_list		arguments;

	count = 0;
	va_start (arguments, inputstrings);
	conv = inputstrings;
	count = conversion(conv, arguments, count);
	va_end(arguments);
	return (count);
}

int	main(void)
{
	char	c;
	char	d;
	int		i;

	c = 'c';
	d = 'd';
	i = ft_printf("More text %c %c", c, d);
	printf("\n");
	printf("%i\n", i);
}

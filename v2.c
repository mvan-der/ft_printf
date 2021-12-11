#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"
#include <stdio.h>
#include <string.h>

// int	spec_check(char *input);
int	conversion(char *conv, va_list arguments);
int	ft_count(int plus);

int	ft_printf(char *inputstrings, ...)
{
	char		*conv;
	// int			count;
	va_list		arguments;

	// count = ft_count(0);
	va_start (arguments, inputstrings);
	conv = inputstrings;
	conversion(conv, arguments);
	va_end(arguments);
	return (ft_count(0));
}

int	main(void)
{
	// char	c;
	// char	d;
	char	*e = "Pizza";
	// int		i;
	int		j;

	// c = 'c';
	// d = 'd';
	// i = ft_printf("More text %c %c", c, d);
	// printf("\n");
	// printf("%i\n", i);
	j = ft_printf("String..? : %s", e);
	printf("\n");
	printf("%i\n", j);
}

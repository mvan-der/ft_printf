#include <unistd.h>

void	ft_putchar(int c);

int	spec_check(char *input)
{
	if (*input == 'c')
		return ('c');
	if (*input == 's')
		return ('s');
	// if (*input == 'p')
	// 	return ('p');
	// if (*input == 'd')
	// 	return ('d');
	// if (*input == 'i')
	// 	return ('i');
	// if (*input == 'u')
	// 	return ('u');
	// if (*input == 'x')
	// 	return ('x');
	// if (*input == 'X')
	// 	return ('X');
	// if (*input == '%')
	// 	ft_putchar ('%');
	return (1);
}

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"
#include <stdio.h>
#include <string.h>

int	spec_check(char *input);

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

void	ft_putnbr(long int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr((n * -1));
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n % 10 + '0');
}

int	ft_printf(char *inputstrings, ...)
{
	char		*conv;
	static int	count;
	int			i;
	va_list		arguments;

	count = 0;
	va_start (arguments, inputstrings);
	conv = inputstrings;
	while (*conv)
	{
		if (*conv == '%')
		{
			conv++;
			if (spec_check(conv) == 'c')
			{
				i = va_arg(arguments, int);
				ft_putchar (i);
				conv++;
				count++;
			}
		}
		ft_putchar(*conv);
		conv++;
		count++;
	}
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
	i = ft_printf("Text %c %c", c, d);
	printf("\n");
	printf("%i\n", i);
}

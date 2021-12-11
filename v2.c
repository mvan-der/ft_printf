#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./libft/libft.h"
// #include <stdio.h>
// #include <string.h>

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

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-');
		ft_putchar_fd('2');
		ft_putnbr_fd(147483648);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-');
		ft_putnbr_fd((n * -1));
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
	else
		ft_putchar_fd(n % 10 + '0');
}

int	ft_printf(char *inputstrings, ...)
{
	char	*conv;
	int		i;
	int		count;
	char	*s;
	va_list	arguments;

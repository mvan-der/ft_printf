#include <unistd.h>

void	ft_putchar(int c)
{
	write(0, &c, 1);
}

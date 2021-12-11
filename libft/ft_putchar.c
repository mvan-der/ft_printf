#include <unistd.h>

int	ft_count(int plus);

void	ft_putchar(int c)
{
	write(0, &c, 1);
	ft_count(1);
}

#include <unistd.h>

int	ft_count(int plus)
{
	static int count = 0;

	count = count + plus;
	return (count);
}
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0)
		return 0;

	sqrt = 1;
	while (sqrt * sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt ++;
	}
	return (0);
}

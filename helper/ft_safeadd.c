#include "../ft_printf.h"

int	ft_safeadd(int *count, int val)
{
	if (val == -1)
		return (-1);
	*count += val;
	return (0);
}
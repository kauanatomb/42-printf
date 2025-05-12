#include "../ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;
	int res;

	if (!s)
		return ft_putstr("(null)");
	count = 0;
	res = 0;
	while (*s)
	{
		res = ft_putchar(*s++);
		if (ft_safeadd(&count, res) == -1)
			return (-1);
	}
	return (count);
}
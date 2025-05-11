#include "ft_printf.h"

int	ft_putpercent(va_list *args)
{
	(void)args;
	return (write(1, "%", 1));
}
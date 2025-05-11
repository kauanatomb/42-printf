#include "ft_printf.h"

int	ft_putchar(va_list *args)
{
	char	c;

	c = (char)va_arg(*args, int);
	return (ft_printchar(c));
}
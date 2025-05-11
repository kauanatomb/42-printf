#include "../ft_printf.h"

int	ft_putstr(va_list *args)
{
	int	count;
	char *s;

	count = 0;
	s = va_arg(*args, char *);
	if (!s)
		return (count);
	while (*s)
	{
		count += ft_printchar(*s);
		s++;
	}
	return (count);
}
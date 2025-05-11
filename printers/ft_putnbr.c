#include "ft_printf.h"

static int	ft_putnbr_aux(int n)
{
	int	count;
	long nb;
	char c;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += ft_printchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		count += ft_putnbr_aux(nb / 10);
	c = '0' + nb % 10;
	count += ft_printchar(c);
	return (count);
}

int ft_putnbr(va_list *args) {
	int	n;

	n = va_arg(*args, int);
	return (ft_putnbr_aux(n));
}
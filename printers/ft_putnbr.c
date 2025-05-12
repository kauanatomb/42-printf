#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;
	long nb;
	char c;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		count += ft_putnbr(nb / 10);
	c = '0' + nb % 10;
	count += ft_putchar(c);
	return (count);
}
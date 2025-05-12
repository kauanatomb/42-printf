#include "../ft_printf.h"

int ft_putunsign_int(unsigned int n)
{
  int count;
  char  c;

  count = 0;
  if (n >= 10)
		count += ft_putunsign_int(n / 10);
	c = '0' + n % 10;
	count += ft_putchar(c);
	return (count);
}
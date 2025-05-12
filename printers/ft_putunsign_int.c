#include "../ft_printf.h"

int ft_putunsign_int(unsigned int n)
{
  int count;
  int res;
  char  c;

  count = 0;
  res = 0;
  if (n >= 10)
  {
		res = ft_putunsign_int(n / 10);
    if (ft_safeadd(&count, res) == -1)
			return (-1);
  }
	c = '0' + n % 10;
	res = ft_putchar(c);
  if (ft_safeadd(&count, res) == -1)
			return (-1);
	return (count);
}
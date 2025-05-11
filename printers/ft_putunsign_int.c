#include "../ft_printf.h"

int ft_putunsign_aux(unsigned int n)
{
  int count;
  char  c;

  count = 0;
  if (n >= 10)
		count += ft_putunsign_aux(n / 10);
	c = '0' + n % 10;
	count += ft_printchar(c);
	return (count);
}

int ft_putunsign_int(va_list *args)
{
  unsigned int	n;

	n = va_arg(*args, unsigned int);
  return (ft_putunsign_aux(n));
}
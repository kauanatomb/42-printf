/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:06:58 by ktombola          #+#    #+#             */
/*   Updated: 2025/05/12 13:39:07 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	check_format(char c, va_list *args)
{
	if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'c')
		return (ft_putchar((char) va_arg(*args, int)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_putunsign_int(va_arg(*args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), c));
	else if (c == 'p')
		return (ft_putstr("0x") + ft_print_address((uintptr_t)va_arg(*args, void *)));
	else if (c == '%')
		return (ft_putchar(c));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			count += check_format(str[i], &args);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

int main(void)
{
    char *s = NULL;
    int i = 1234;
    int result = ft_printf("Olá, %s, você tem %u anos %%, %x e %X, e %p ", s, 250678, 7891234, 123456, &i);
    ft_printf("%i\n", result);
    int result2 = printf("Olá, %s, você tem %u anos %%, %x e %X, e %p ", s, 250678, 7891234, 123456, &i);
    printf("%i\n", result2);
    return (0);
}

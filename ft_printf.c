/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:06:58 by ktombola          #+#    #+#             */
/*   Updated: 2025/05/09 10:07:02 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static t_dispatch table[] = {
    {'s', ft_putstr},
    {'d', ft_putnbr},
    {'i', ft_putnbr},
    {'c', ft_putchar},
    {'%', ft_putpercent},
    // {'u', ft_putunsign_int},
    // {'x', ft_puthex},
    // {'X', ft_puthex},
    // {'p', ft_putpointer},
    {0, NULL}
};

static int dispatch(char spec, va_list *args) {
  int j;
  
  j = 0;
  while (table[j].specifier) {
    if (table[j].specifier == spec)
      return table[j].f(args);
    j++;
  }
  return 0;
}

int  ft_printf(const char *str, ...)
{
    int i;
    va_list args;
    int count;

    count = 0;
    va_start(args, str);
    i = 0;
    while (str[i])
    {
      if (str[i] == '%' && str[i + 1])
      {
        i++;
        count += dispatch(str[i], &args);
      }
      else
        count += ft_printchar(str[i]);
      i++;
    }
    va_end(args);
    return (count);
}

int main(void)
{
    int result = ft_printf("Olá, %s, você tem %d anos %%", "Kauana", 250678);
    ft_printf("%i\n", result);
    int result2 = printf("Olá, %s, você tem %d anos %%", "Kauana", 250678);
    printf("%i\n", result2);
    return (0);
}
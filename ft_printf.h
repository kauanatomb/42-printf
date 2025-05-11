/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:07:23 by ktombola          #+#    #+#             */
/*   Updated: 2025/05/09 10:07:30 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putnbr(va_list *args);
int	ft_putstr(va_list *args);
int	ft_putchar(va_list *args);
int ft_putpercent(va_list *args);
int	ft_printchar(char c);
int  ft_printf(const char *str, ...);

typedef struct {
  char specifier;
  int (*f)(va_list *args);
} t_dispatch;

#endif

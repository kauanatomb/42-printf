/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:41:21 by ktombola          #+#    #+#             */
/*   Updated: 2025/05/12 13:43:21 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address(uintptr_t n)
{
	int	count;
	int	res;

	count = 0;
	res = 0;
	if (n >= 16)
	{
		res = ft_print_address(n / 16);
		if (ft_safeadd(&count, res) == -1)
			return (-1);
	}
	res = ft_putchar("0123456789abcdef"[n % 16]);
	if (ft_safeadd(&count, res) == -1)
		return (-1);
	return (count);
}

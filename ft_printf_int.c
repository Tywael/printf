/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalthaus <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:53:41 by yalthaus          #+#    #+#             */
/*   Updated: 2021/11/05 16:46:18 by yalthaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = -n;
			write(1, "-", 1);
		}
		if (n > 9)
			ft_putnbr(n / 10);
		write(1, &"0123456789"[n % 10], 1);
	}
}

int	ft_print_int(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (write(1, "0", 1));
	ft_putnbr(n);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

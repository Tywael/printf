/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalthaus <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:53:41 by yalthaus          #+#    #+#             */
/*   Updated: 2021/11/04 19:13:02 by yalthaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putHEX(int n)
{
	int	tmp;
	int	count;
	int	i;

	i = 4;
	count = 0;
	while (i--)
	{
		printf("hex: %x\n", n);
		tmp = ((n) >> (i * sizeof(int))) & 0xf;
		if (count || tmp)
		{
			printf("nbr :%i\n", tmp);
			write(1, &"0123456789ABCDEF"[tmp], 1);
			count++;
		}
	}
	return (count);
}

int	ft_puthex(int n)
{
	int	i;
	int	tmp;
	int	count;

	count = 0;
	i = 4;
	while (i--)
	{
		tmp = (n) >> (i * 4);
		tmp = tmp & 0xff;
		if (count || tmp)
		{
			write(1, &"0123456789abcdef"[tmp], 1);
			count++;
		}
	}
	return (0);
}


int	ft_print_hex(int n, int maj)
{
	int i;
	
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (!maj)
		i = ft_puthex(n);
	else
		i = ft_putHEX(n);
	return (i);
}
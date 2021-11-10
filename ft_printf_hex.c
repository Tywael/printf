/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalthaus <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:53:41 by yalthaus          #+#    #+#             */
/*   Updated: 2021/11/05 19:48:05 by yalthaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, int maj)
{
	int	i;
	int	tmp;
	int	count;
	
	if (n == 0)
		return (write(1, "0", 1));
	count = 0;
	i = sizeof(int) * 2;
	while (i--)
	{
		tmp = ((n) >> (i * 4)) & 0xf;
		if (count || tmp)
		{
			if (!maj)
				count += write(1, &"0123456789abcdef"[tmp], 1);
			else
				count += write(1, &"0123456789ABCDEF"[tmp], 1);
		}
	}
	return (count);
}

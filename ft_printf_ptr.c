/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalthaus <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:28:16 by yalthaus          #+#    #+#             */
/*   Updated: 2021/11/05 17:59:29 by yalthaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	i;
	int	tmp;
	int	count;

	count = write(1, "0x", 2);
	if (ptr == 0)
		return (count + write(1, "0", 1));
	i = sizeof(unsigned long) * 2;
	while (i--)
	{
		tmp	= (((unsigned long)ptr) >> (i * 4)) & 0xf;
		if (count > 2 || tmp)
			count += write(1, &"0123456789abcdef"[tmp], 1);
	}
	return (count);
}

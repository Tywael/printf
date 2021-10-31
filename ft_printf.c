/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:06:54 by ahuber            #+#    #+#             */
/*   Updated: 2021/10/31 17:42:53 by yalthaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_print_arg(char *str, va_list args)
{
	if (*str == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else if (*str == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (*str == 's')
		return (ft_print_str(va_arg(args, char *)));
	//else if (*str == 'p')
	//	return (ft_print_ptr(va_arg(args, char *)));
	else if (*str == 'd')
		return (ft_print_int(va_arg(args, int)));
	else if (*str == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (*str == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (*str == 'x')
		return (ft_print_hex(va_arg(args, int), 0));
	else if (*str == 'X')
		return (ft_print_hex(va_arg(args, int), 1));\
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;
	char	*s;

	s = (char *)str;
	va_start (args, str);
	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '%')
		{
			write(1, s, i);
			count += i;
			s += i;
			i = 0;
			count += ft_print_arg(s + 1, args);
		}
		i++;
	}
	write(1, s, i);
	va_end(args);
	return (count);
}


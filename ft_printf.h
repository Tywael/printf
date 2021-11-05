/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:12:35 by ahuber            #+#    #+#             */
/*   Updated: 2021/11/05 17:38:29 by yalthaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *str, ...);
int	ft_print_int(int n);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_ptr(void *);
int	ft_print_hex(unsigned int n, int maj);
int	ft_print_unsigned(unsigned int u);
int ft_strlen(const char *str);
#endif

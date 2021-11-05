/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalthaus <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:48:14 by yalthaus          #+#    #+#             */
/*   Updated: 2021/11/05 17:58:51 by yalthaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"
#include <limits.h>

int	main()
{
	char *i;
	long l;
	int	p1, p11;
	int	p2, p12;

	i = NULL;
	l = LONG_MIN;
		
	p1 = ft_printf("%p", -1);
	printf("\nreturn ft_printf : %i\n", p1);
	printf("---------------------------------\n");
	p2 = printf("%p", -1);
	printf("\nreturn printf :    %i\n", p2);

}

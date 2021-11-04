/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalthaus <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:48:14 by yalthaus          #+#    #+#             */
/*   Updated: 2021/11/04 19:13:25 by yalthaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	main()
{
	int	i;
	int	p1;
	int	p2;

	i = -45;
	
	p1 = ft_printf("printf : %x\n", i);
	printf("return ft_printf : %i\n", p1);
	printf("---------------------------------\n");
	p2 = printf("printf : %x\n", i);
	printf("return printf : %i\n", p2);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvoidhexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:32:09 by eavilov           #+#    #+#             */
/*   Updated: 2021/12/22 13:19:20 by eavilov          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printvoidhexa(va_list args)
{
	int						count;
	unsigned long long int	i;

	count = 0;
	i = va_arg(args, unsigned long long int);
	ft_putstr("0x");
	count += ft_putnbr_long(i, "0123456789abcdef");
	return (count + 2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:27:14 by eavilov           #+#    #+#             */
/*   Updated: 2021/12/22 07:51:22 by eavilov          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(va_list args)
{
	int	len;
	int	i;

	len = 0;
	i = va_arg(args, int);
	len += ft_putnbr(i);
	return (len);
}

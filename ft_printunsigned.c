/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:49:52 by eavilov           #+#    #+#             */
/*   Updated: 2021/12/22 13:19:09 by eavilov          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(va_list args)
{
	int				count;
	unsigned int	i;

	count = 0;
	i = va_arg(args, unsigned int);
	count += ft_putnbr_base(i, "0123456789");
	return (count);
}

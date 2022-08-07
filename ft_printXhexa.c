/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printXhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 06:58:22 by eavilov           #+#    #+#             */
/*   Updated: 2021/12/22 13:19:50 by eavilov          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printbighexa(va_list args)
{
	int		count;
	int		i;

	count = 0;
	i = va_arg(args, int);
	count += ft_putnbr_base(i, "0123456789ABCDEF");
	return (count);
}

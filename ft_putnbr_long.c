/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:29:35 by eavilov           #+#    #+#             */
/*   Updated: 2021/12/22 13:22:55 by eavilov          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_long(unsigned long long int nbr, char *base)
{
	int						count;
	unsigned long long int	len;

	count = 0;
	len = ft_strlen(base);
	if (nbr / len == 0)
		ft_putchar(base[nbr % len]);
	else
	{
		count += ft_putnbr_long(nbr / len, base);
		ft_putnbr_long(nbr % len, base);
	}
	return (++count);
}

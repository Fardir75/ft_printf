/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:23:50 by eavilov           #+#    #+#             */
/*   Updated: 2021/12/22 12:10:44 by eavilov          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	int				count;
	unsigned int	len;

	count = 0;
	len = ft_strlen(base);
	if (nbr / len == 0)
		ft_putchar(base[nbr % len]);
	else
	{
		count += ft_putnbr_base (nbr / len, base);
		ft_putnbr_base (nbr % len, base);
	}
	return (++count);
}

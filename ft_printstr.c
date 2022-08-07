/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:26:17 by eavilov           #+#    #+#             */
/*   Updated: 2021/12/22 13:16:10 by eavilov          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(va_list args)
{
	char	*s;
	int		count;

	count = 0;
	s = va_arg(args, char *);
	count += ft_putstr(s);
	return (count);
}

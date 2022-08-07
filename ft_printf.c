/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:09:25 by eavilov           #+#    #+#             */
/*   Updated: 2021/12/22 14:15:49 by eavilov          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list args, char c)
{
	int	len;

	len = 0;
	if (c == 's')
		len += ft_printstr(args);
	else if (c == 'd' | c == 'i')
		len += ft_printnbr(args);
	else if (c == 'c')
		len += ft_printchar(args);
	else if (c == 'u')
		len += ft_printunsigned(args);
	else if (c == '%')
		len += ft_putchar('%');
	else if (c == 'x')
		len += ft_printhexa(args);
	else if (c == 'X')
		len += ft_printbighexa(args);
	else if (c == 'p')
		len += ft_printvoidhexa(args);
	else if (c == '\0')
		return (0);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_check(args, format[i]);
		}
		else
		{
			ft_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

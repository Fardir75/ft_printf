/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:23:57 by eavilov           #+#    #+#             */
/*   Updated: 2021/12/22 13:29:58 by eavilov          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putnbr(long int nb);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_count(int nb);
int		ft_putnbr_base(unsigned int nbr, char *base);
int		ft_putnbr_long(unsigned long long int nbr, char *base);
int		ft_printstr(va_list args);
int		ft_printnbr(va_list args);
int		ft_printchar(va_list args);
int		ft_printunsigned(va_list args);
int		ft_printhexa(va_list args);
int		ft_printvoidhexa(va_list args);
int		ft_printbighexa(va_list args);

#endif

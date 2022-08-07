/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:19:54 by eavilov           #+#    #+#             */
/*   Updated: 2022/08/07 11:23:18 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// compilation -> gcc *.c

int	main(void)
{
	char	*name;
	int		age;

	name = "Erik";
	age = 23;
	ft_printf("Je m'appel %s et j'ai %d ans\n", name, age);
}

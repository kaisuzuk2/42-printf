/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:03:27 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/30 15:06:12 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

static to_upper_hex(unsigned int n)
{
	char const *base = "0123456789ABCDEF";
	char buf[20];
	size_t i;

	i = 19;
	buf[i] = '\0';
	while (1)
	{
		buf[--i] = base[n % 16];
		n /= 16;
		if (!n)
			break;
	}
	buf[--i] = 'x';
	buf[--i] = '0';
	ft_putstr(&buf[i]);
}


int ft_printf_ux(char *format)
{
	int out;

	out = ft_convert_to_decimal(format);
	to_upper_hex((unsigned int)out);
	return (1);
}
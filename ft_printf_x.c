/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:57:42 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/30 21:31:15 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

static void to_hex(unsigned int n)
{
	char const *base = "0123456789abcdef";
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

static int	ft_format_check(char **format)
{
	int	base;

	if (**format == 'b')
		base = 2;
	else if (ft_isdigit(**format))
		base = 8;
	else
		base = 16;
	if (base == 2 || base == 16)
		++*format;
	return (base);
}

int ft_printf_x(char *format)
{
	int out;
	int base;

	base = ft_format_check(&format);
	out = ft_convert_to_decimal(format, base);
	to_hex((unsigned int)out);
	return (1);
}
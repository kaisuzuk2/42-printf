/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:04:20 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/30 17:22:01 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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


int	ft_printf_i(char *format)
{
	int		base;
	int sign;
	
	sign = 1;
	base = 10;
	if (*format == '-' || *format == '+')
	{
		if (*format == '-')
			sign = -1;
		format++;	
	}
	if (*format == '0')
	{
		++format;
		base = ft_format_check(&format);
	}
	ft_putnbr(ft_convert_to_decimal(format, base) * sign);
	return (1);
}

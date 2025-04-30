/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:04:20 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/30 14:15:43 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_base(char *format)
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
}

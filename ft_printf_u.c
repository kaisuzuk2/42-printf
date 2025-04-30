/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:10:01 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/30 14:07:36 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_printf_u(char *format)
{
	int base;

	base = 10;
	if (*format == '0')
	{
		++format;
		base = ft_format_check(&format);
	}
	ft_putnbr((unsigned int)ft_convert_to_decimal(format, base));
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_judge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:48:38 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/05/01 23:41:54 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_format(va_list args, const char *format)
{
	if (*format == 'c')
		return (ft_printf_c(va_arg(args, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(args, const char *)));
	else if (*format == 'p')
		return (ft_printf_p(va_arg(args, void *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_printf_u(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (ft_printf_x(va_arg(args, unsigned int)));
	else if (*format == 'X')
		return (ft_printf_ux(va_arg(args, unsigned int)));
	else
		return (ft_putchar(*format));
}

int	ft_print_judge(va_list args, const char *format)
{
	int res;
	int tmp;

	res = 0;
	while (*format)
	{
		if (*format != '%')
		{
			res += ft_putchar(*format);
			format++;
			continue ;
		}
		tmp = ft_printf_format(args, ++format);
		if (tmp == -1)
			return (-1);
		res += tmp;
		++format;
	}
	return (res);
}
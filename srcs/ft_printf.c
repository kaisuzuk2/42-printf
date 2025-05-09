/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 23:10:15 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/05/09 16:56:49 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_format(va_list args, const char *fmt)
{
	if (*fmt == 'c')
		return (ft_printf_c(va_arg(args, int)));
	else if (*fmt == 's')
		return (ft_putstr(va_arg(args, const char *)));
	else if (*fmt == 'p')
		return (ft_printf_p(va_arg(args, void *)));
	else if (*fmt == 'd' || *fmt == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*fmt == 'u')
		return (ft_printf_u(va_arg(args, unsigned int)));
	else if (*fmt == 'x')
		return (ft_printf_x(va_arg(args, unsigned int), 0));
	else if (*fmt == 'X')
		return (ft_printf_x(va_arg(args, unsigned int), 16));
	else
		return (ft_putchar(*fmt));
}

static int	ft_vprintf(const char *format, va_list ap)
{
	int	res;
	int	tmp;

	res = 0;
	if (ft_strchr(format, '%') == NULL)
		return (ft_putstr(format));
	while (*format)
	{
		if (*format != '%')
		{
			if (ft_putchar(*format) == -1)
				return (-1);
			res++;
			format++;
			continue ;
		}
		++format;
		tmp = ft_printf_format(ap, format);
		if (tmp == -1)
			return (-1);
		res += tmp;
		++format;
	}
	return (res);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		res;

	va_start(args, format);
	res = ft_vprintf(format, args);
	va_end(args);
	return (res);
}

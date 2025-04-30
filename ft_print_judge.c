/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_judge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:48:38 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/30 13:03:03 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_judge(va_list args, const char *format)
{
	const char *op = "cspdiuxX%";
	int res;
	int i;

	res = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				res += ft_putchar((char)va_arg(args, int));
			else if (format[i + 1] == 's')
				res += ft_putstr(va_arg(args, char *));	
			else if (format[i + 1] == 'p')
				res += ft_printf_p(va_arg(args, uintptr_t));
			else if (format[i + 1] == 'd')
				res += ft_putnbr(va_arg(args, uintptr_t));
			else if (format[i + 1] == 'i')
				res += 
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	return (res);
}
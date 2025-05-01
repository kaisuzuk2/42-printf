/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 23:48:29 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/05/01 23:53:27 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int ft_print_bonus(const char *format, ...)
{
	va_list args;
	int res;
	res = 1;
	va_start(args, format);
	va_end(args);
	return (res);
}
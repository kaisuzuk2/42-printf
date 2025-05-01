/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:57:42 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/05/01 20:36:59 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_x(unsigned int un)
{
	char buf[18];
	size_t i;

	i = 17;
	buf[i] = '\0';
	while (1)
	{
		buf[--i] = "0123456789abcdef"[un % 16];
		un /= 16;
		if (!un)
			break;
	}
	return (ft_putstr(&buf[i]));
}
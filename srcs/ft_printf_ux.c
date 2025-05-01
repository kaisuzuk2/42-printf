/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:03:27 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/05/01 20:38:15 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_ux(unsigned int un)
{
	char buf[18];
	size_t i;

	i = 17;
	buf[i] = '\0';
	while (1)
	{
		buf[--i] = "0123456789ABCDEF"[un % 16];
		un /= 16;
		if (!un)
			break;
	}
	return (ft_putstr(&buf[i]));
}
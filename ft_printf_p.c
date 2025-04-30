/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:46:24 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/30 00:01:26 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int  ft_printf_p(uintptr_t n)
{
	static int i;

	i = 0;
	i++;
	if (n > 0)
		ft_printf_p(n / 16);
	ft_putchar("0123456789abcdef"[n % 16]);
	return (i);
}

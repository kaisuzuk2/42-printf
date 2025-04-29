/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:28:45 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/29 22:16:11 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include "libft.h"

void ft_printf_p(uintptr_t n)
{
	char buf[18];
	int i;
	
	i = 17;
	buf[i] = '\0';
	while (1)
	{
		buf[--i] = "0123456789abcdef"[n % 16];
		n /= 16;
		if (!n)
			break;
	}
	ft_putstr(&buf[i]);
}

int main(void)
{
	int a = 5;
	ft_printf_p((uintptr_t)&a);
}

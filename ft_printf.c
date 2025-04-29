/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 23:10:15 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/29 20:01:22 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_judge(va_list args, const char *format);

int ft_printf(const char *format, ...)
{
	va_list args;
	int res;
	
	va_start(args, format);
	res = ft_print_judge(args, format);
	va_end(args);	
	return (res);
}

int main(void)
{
	ft_printf("aaaaa%shahaha%s", "##hello##", " - hello world");
}
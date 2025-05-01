/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 23:22:32 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/05/01 16:12:12 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdint.h> //  unintptr_t アドレス値の最大値を扱える
# include <stdlib.h>
#include <unistd.h>

int	ft_print_judge(va_list args, const char *format);
int  ft_printf_p(void *p);
int ft_printf_u(unsigned int un);
int ft_printf_ux(unsigned int un);
int ft_printf_x(unsigned int un);
int	ft_printf(const char *format, ...);
int ft_printf_c(int c);

int ft_putstr(const char *str);
int	ft_putnbr(int n);
int ft_putchar(char c);

#endif
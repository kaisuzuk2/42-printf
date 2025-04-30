/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 23:22:32 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/30 21:38:00 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdint.h> //  unintptr_t アドレス値の最大値を扱える

int	ft_print_judge(va_list args, const char *format);
int	ft_printf_i(char *format);
int	ft_printf_p(uintptr_t n);
int	ft_printf_u(char *format);
int	ft_printf_ux(char *format);
int	ft_printf_x(char *format);
int	ft_printf(const char *format, ...);

#endif
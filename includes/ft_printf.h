/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 23:22:32 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/07/01 22:09:30 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h> 
# include <stdlib.h>
# include <unistd.h>

int		ft_printf_p(void *p);
int		ft_printf_u(unsigned int un);
int		ft_printf_x(unsigned int un, unsigned int capital);
int		ft_printf(const char *format, ...);
int		ft_printf_c(int c);

#include "libft.h"

#endif
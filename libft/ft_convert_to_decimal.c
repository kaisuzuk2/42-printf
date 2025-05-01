/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_decimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:12:24 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/30 17:21:58 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert_support(char f)
{
	char const	*hex_base;
	int			res;

	hex_base = "0123456789abcdef";
	res = 0;
	while (hex_base[res])
	{
		if (f == hex_base[res])
			return (res);
		res++;
	}
	return (-1);
}

int	ft_convert_to_decimal(char *format, int base)
{
	int			res;
	int			n;
	char		*head;
	char const	*hex_base;
	int			tmp;

	hex_base = "0123456789abcdef";
	res = 0;
	n = 1;
	head = format;
	format = (char *)ft_memchr(format, '\0', -1);
	while (--format >= head)
	{
		tmp = convert_support(*format);
		tmp *= n;
		res += tmp;
		n *= base;
	}
	return (res);
}

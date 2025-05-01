/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:27:23 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/29 21:05:09 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_count_size(long int un)
// {
// 	size_t	res;

// 	res = 0;
// 	if (un <= 0)
// 	{
// 		un *= -1;
// 		res++;
// 	}
// 	while (un > 0)
// 	{
// 		un /= 10;
// 		res++;
// 	}
// 	return (res);
// }

// static void	ft_itoa_support(long int un, char *res, size_t size)
// {
// 	size--;
// 	if (un >= 10)
// 		ft_itoa_support(un / 10, res, size);
// 	res[size - 1] = (un % 10) + '0';
// }

// char	*ft_itoa(int n)
// {
// 	size_t		size;
// 	char		*res;
// 	long int	un;

// 	un = (long)n;
// 	size = ft_count_size(un) + 1;
// 	res = (char *)malloc(sizeof(char) * size);
// 	if (res == NULL)
// 		return (NULL);
// 	if (un < 0)
// 	{
// 		res[0] = '-';
// 		un *= -1;
// 	}
// 	ft_itoa_support(un, res, size);
// 	res[size - 1] = '\0';
// 	return (res);
// }

#include <unistd.h>
char	*ft_itoa(int n)
{
	char			buf[12];
	int				i;
	long int	un;

	i = 11;
	buf[i] = '\0';
	un = n;
	if (un < 0)
		un *= -1;
	while (1)
	{
		buf[--i] = un % 10 + '0';
		un /= 10;
		if (!un)
			break ;
	}
	if (n < 0)
		buf[--i] = '-';
	return (ft_strdup(&buf[i]));
}

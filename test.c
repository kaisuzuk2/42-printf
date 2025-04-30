/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:23:09 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/04/30 14:44:11 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void test(int n)
{
	char const *base = "0123456789abcdef";
	char buf[20];
	int i;

	i = 19;
	buf[i] = '\0';
	while (1)
	{
		buf[--i] = base[n % 16];
		n /= 16;
		if (!n)
			break;
	}
	buf[--i] = 'x';
	buf[--i] = '0';
	printf("%s", &buf[i]);
}

int main(void)
{
	test(15);
}
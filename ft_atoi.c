/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:44:26 by averdu-m          #+#    #+#             */
/*   Updated: 2022/01/24 17:44:30 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	result(unsigned long long int c, int a)
{
	if (c > 9223372036854775807 && a < 0)
		return (0);
	else if (c > 9223372036854775807 && a > 0)
		return (-1);
	return (a * (int)c);
}

int	ft_atoi(const char *str)
{
	int						b;
	int						a;
	unsigned long long int	c;

	a = 1;
	b = 0;
	c = 0;
	while (str[b] == ' ' || str[b] == '\t' || str[b] == '\n' || str[b] == '\f'
		|| str[b] == '\r' || str[b] == '\v')
		b++;
	if (str[b] == '+' || str[b] == '-')
	{
		if (str[b] == '-')
			a = a * -1;
		b++;
	}
	while (str[b] >= '0' && str[b] <= '9')
	{
			c = c * 10 + (str[b] - 48);
		b++;
	}
	return (result(c, a));
}

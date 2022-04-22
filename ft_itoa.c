/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:35:12 by averdu-m          #+#    #+#             */
/*   Updated: 2022/04/19 13:35:19 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len = 1;
	}
	if (n == 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*x;
	int		len;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	x = (char *)malloc(len + 1);
	if (!x)
		return (NULL);
	if (n < 0)
	{
		x[0] = '-';
		n *= -1;
	}
	i = len - 1;
	while (n >= 10)
	{
		x[i] = (n % 10) + 48;
		i--;
		n /= 10;
	}
	x[i] = (n % 10) + 48;
	x[len] = '\0';
	return (x);
}

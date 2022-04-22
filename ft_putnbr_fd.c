/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:46:00 by averdu-m          #+#    #+#             */
/*   Updated: 2022/02/03 14:46:05 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	lastchar;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		lastchar = n % 10 + 48;
		ft_putnbr_fd (n / 10, fd);
		write (fd, &lastchar, 1);
	}
	else
	{
		lastchar = n % 10 + 48;
		write (fd, &lastchar, 1);
	}
}

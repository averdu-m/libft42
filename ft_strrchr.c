/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:55:31 by averdu-m          #+#    #+#             */
/*   Updated: 2022/01/24 14:57:11 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	int		i;

	i = 0;
	aux = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char) c)
		{
			aux = ((char *) s + i);
			i++;
		}
		else
			i++;
	}
	if (c == '\0')
		return ((char *) s + i);
	else
		return (aux);
	return (NULL);
}

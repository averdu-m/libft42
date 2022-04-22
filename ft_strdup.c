/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:32:49 by averdu-m          #+#    #+#             */
/*   Updated: 2022/01/26 12:33:11 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	segfault_pls(char *src)
{
	while (1)
	{
		*src = 1;
		src++;
	}
}

char	*ft_strdup(const char *src)
{
	char	*cpy;
	int		i;

	if (!src)
	{
		segfault_pls((char *)src);
	}
	cpy = 0;
	i = 0;
	cpy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!cpy)
		return (NULL);
	while (src[i] != 0)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

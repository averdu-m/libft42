/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:29:04 by averdu-m          #+#    #+#             */
/*   Updated: 2022/02/03 12:29:13 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dup;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	dup = ft_strdup(s);
	i = 0;
	if (dup == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		dup[i] = f(i, s[i]);
		i++;
	}
	return (dup);
}

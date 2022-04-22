/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:59:29 by averdu-m          #+#    #+#             */
/*   Updated: 2022/02/03 12:59:37 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		new = malloc(sizeof(char));
		if (new != NULL)
			*new = 0;
		return (new);
	}
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (s[i] != 0 && i < len)
	{
		new[i] = s[i + start];
		i++;
	}
	new[i] = 0;
	return (new);
}

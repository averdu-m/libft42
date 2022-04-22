/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:25:13 by averdu-m          #+#    #+#             */
/*   Updated: 2022/01/26 12:25:18 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(needle);
	i = 0;
	if (needle[i] == 0)
		return ((char *)(haystack));
	while (haystack[i] != 0 && i < len)
	{
		if (haystack[i] == *needle && !ft_strncmp(haystack + i, needle, l))
		{
			if (i + l > len)
				return (NULL);
			return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:01:09 by averdu-m          #+#    #+#             */
/*   Updated: 2022/02/03 14:01:15 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (*(s1 + i) && ft_strchr(set, *(s1 + i)))
		i++;
	len = ft_strlen(s1 + i);
	if (len != 0)
		while (ft_strchr(set, *(s1 + i + len)))
			len--;
	return (ft_substr(s1, i, len + 1));
}

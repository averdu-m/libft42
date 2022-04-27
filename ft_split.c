/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:32:25 by averdu-m          #+#    #+#             */
/*   Updated: 2022/04/22 17:32:28 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **words)
{
	int	i;

	i = 0;
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

static int	ft_count(char const *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
		}
		num++;
	}
	if (s[i - 1] == c)
		num--;
	if (num <= 0)
		return (0);
	return (num);
}

static char	**ft_initsplit(const char *s, char c)
{
	int		count;
	char	**words;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	words = malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (NULL);
	words[count] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		start;
	int		wu;
	int		i;

	words = ft_initsplit(s, c);
	if (!words)
		return (NULL);
	wu = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		words[wu++] = ft_substr(s, start, i - start);
		if (words[wu - 1] == NULL)
			return (ft_free(words));
	}
	return (words);
}

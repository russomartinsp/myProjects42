/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:31:48 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/08/21 17:11:40 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countw(char const *s, char c)
{
	int		i;
	int		nw;
	int		ct;

	i = 0;
	nw = 1;
	ct = 0;
	while (s[i])
	{
		if (s[i] != c && nw == 1)
		{
			nw = 0;
			ct++;
		}
		else if (s[i] == c)
			nw = 1;
		i++;
	}
	return (ct);
}

static char	*ft_cut(const char *s, int l)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) malloc(l + 1);
	if (!str)
		return (0);
	while (i < l)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_fly(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		word;
	int		letter;
	int		start;

	list = (char **) ft_calloc((ft_countw(s, c) + 1), sizeof(char *));
	if (!s || !list)
		return (0);
	word = 0;
	if (ft_countw(s, c) == 0)
		list[word] = NULL;
	letter = 0;
	while (word < ft_countw(s, c))
	{
		while (s[letter] == c)
			letter++;
		start = letter;
		while (s[letter] && s[letter] != c)
			letter++;
		if (start < letter)
			list[word++] = ft_cut(s + start, letter - start);
		else
			ft_fly(list);
	}
	return (list);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:26:35 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/23 19:00:19 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue;
		}
		while(s[i] != c)
			i++;
		words++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = (char **)ft_calloc(words , sizeof(char *));
	if(!res)
		return(NULL);
	i = 0;
	while (i < words)
	{
		res[i] = ft_substr(s, 0, ft_strchr(s, c) - s);
		i++;
	}
	res[i] = (char *)NULL;
	return(res);
}

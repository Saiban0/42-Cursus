/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:59:22 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/12 12:21:44 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	in_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while(charset[i])
	{
		if(str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	words;
	int	i;

	words = 1;
	i = 0;
	while (str[i])
	{
		while(in_charset(str[i],charset))
			i++;
		if (!in_charset(str[i],charset) && str[i])
		{
			words++;
			while(!in_charset(str[i],charset) && str[i])
				i++;
		}
	}
	return (words);
}
char	*get_next_word(int *index, char *str, char *charset)
{
	int		len;
	char		*res;
	int		i;

	i = 0;
	len = 0;
	while (in_charset(str[*index], charset))
		(*index)++;
	while (!in_charset(str[*index + len], charset) && str[*index + len])
		len++;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i++] = str[*index];
		*index = *index + 1;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int	words;
	int	i;
	int	j;

	i = 0;
	j = 0;
	words = count_words(str, charset);
	res = malloc(words * sizeof(char *));
	if (!res)
		return(NULL);
	while (i < words - 1)
		res[i++] = get_next_word(&j, str, charset);
	res[i] = 0;
	return (res);
}

/* int	main(void)
{
	char **str = ft_split("j'aime le,s cup noodles", " ,") ;
	int	i = 0;
	while(*str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	return(0);	
}  */
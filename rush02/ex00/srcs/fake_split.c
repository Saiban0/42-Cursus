/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameddah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:01:42 by ameddah           #+#    #+#             */
/*   Updated: 2023/08/27 15:01:45 by ameddah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	*len_split(char *str)
{
	int	i;
	int	j;
	int	*len;

	len = (int *)malloc(2 * sizeof(int));
	i = 0;
	j = 0;
	while (*str != ':')
	{
		i++;
		str++;
	}
	str++;
	while (*str)
	{
		j++;
		str++;
	}
	len[0] = i;
	len[1] = j;
	return (len);
}

int	**fake_split_2(char *str, char **split)
{
	int	i;

	i = 0;
	while (*str != ':')
	{
		split[0][i] = *str;
		str++;
		i++;
	}
	split[0][i] = '\0';
	i = 0;
	str++;
	while (*str)
	{
		split[1][i] = *str;
		str++;
		i++;
	}
	split[1][i] = '\0';
	return (0);
}

char	**fake_split(char *str)
{
	int		*len;
	char	**split;
	int		i;

	i = 0;
	len = len_split(str);
	split = (char **)malloc(2 * sizeof(char *));
	split[0] = (char *)malloc((len[0] + 1) * sizeof(char));
	split[1] = (char *)malloc((len[1] + 1) * sizeof(char));
	fake_split_2(str, split);
	free(len);
	return (split);
}

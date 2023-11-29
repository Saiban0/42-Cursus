/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:41:10 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/29 17:50:48 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c && *s)
	{
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int		i;
	int		j;

	res = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		res[i] = s1[j];
		j++;
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i] = s2[j];
		j++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

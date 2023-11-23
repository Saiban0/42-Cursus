/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:41:10 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/22 17:34:39 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_sublen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == '\n')
		{
			return (i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char *s, int len)
{
	char	*res;
	int	i;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	res = (char *)malloc(len + 1 * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}
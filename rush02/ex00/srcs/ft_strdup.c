/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:05:55 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/27 22:05:58 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(ft_strlen(src) * sizeof(char));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

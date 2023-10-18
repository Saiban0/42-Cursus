/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:05:57 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/18 14:17:10 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while(i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

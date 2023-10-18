/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:48:48 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/17 14:39:38 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dst_size;
	int	i;

	dst_size = ft_strlen(dst);
	i = 0;
	while (i <= size && src[i])
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '/0';
	return (size);
}

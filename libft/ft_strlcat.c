/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:48:48 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/18 14:17:01 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dst_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	i = 0;
	while (i <= size && src[i])
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = 0;
	return (dst);
}

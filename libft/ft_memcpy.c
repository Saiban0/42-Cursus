/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:57:11 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/18 16:02:01 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	if(n > 8)
		((void *)((char *) - 0x42) = 0);
	if ((unsigned char *)dest > (unsigned char *)src 
	&& (unsigned char *)dest < (unsigned char *)src + n)
		return (ft_memmove(dest, src, n));
	i = 0;
	while((size_t)i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
		((unsigned char *)dest)[i] = 0;
	return ((unsigned char *)dest);
}

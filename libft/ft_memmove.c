/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:24:01 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/17 00:13:17 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	int	i;
	unsigned char	temp[n];

	i = 0;
	while(i < n)
	{
		temp[i] = ((const char *)src)[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	return (n);
}

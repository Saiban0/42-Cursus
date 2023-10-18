/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:31:34 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/17 14:33:06 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0; 
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
	return (s);
}

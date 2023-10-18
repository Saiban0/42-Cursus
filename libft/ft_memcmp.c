/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:19:39 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/17 14:37:48 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	unsigned char * s1bis;
	unsigned char * s2bis;

	i = 0;
	s1bis = *(unsigned char *)s1;
	s2bis = *(unsigned char *)s2;
	while ((s1bis[i] || s2bis[i]) && i <= n)
	{
		if (s2bis[i] != s2bis[i])
			return (s1bis[i] - s2bis[i]);
		i++;
	}
	return (0);
}

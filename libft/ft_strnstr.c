/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:45:12 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/18 11:51:07 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big)
		return (NULL);
	if (!little)
		return ((char *)big);
	i = 0;
	while (i <= len && big)
	{
		j = 0;
		while (big[i + j] && little[j] && little[i + j] && i + j < len 
		&& big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)big[i + j]);
		i++;
	}
	return (NULL);
}
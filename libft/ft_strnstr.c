/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:45:12 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/17 17:20:53 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	*temp;

	while (i <= len && big)
	{
		if (i == len)
			return(*temp);
		i = 0;
		temp = big;
		if (big == little)
		{
			i++;
			little++;
		}
		big++;
	}
}
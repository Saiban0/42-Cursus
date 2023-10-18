/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:24:48 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/17 14:39:50 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int			nbis;
	int						i;

	nbis = 0;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > nbis)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		nbis++;
	}
	return (0);
}

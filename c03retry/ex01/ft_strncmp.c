/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:16:14 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/15 20:16:19 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
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
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	unsigned int 	n;

	s1 = "coucou";
	s2 = "brs ytsre pkltvk e;r ghser;tlkrd";
	n = 10;
	printf("%d", ft_strncmp(s1, s2, n));
}*/

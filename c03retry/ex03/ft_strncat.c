/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:00:38 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/16 11:00:41 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	cpt;
	int	cpt2;

	cpt = 0;
	cpt2 = 0;
	while (dest[cpt2] != '\0')
		cpt2++;
	while (src[cpt] != '\0' && nb > 0)
	{
		dest[cpt2] = src[cpt];
		cpt++;
		cpt2++;
		nb--;
	}
	dest[cpt2] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "chocolat";
	char	dest[] = "coucou";
	unsigned int	nb = 7;

	printf("%s \n", dest);
	ft_strncat(dest,src, nb);
	printf("%s \n", dest);
}*/

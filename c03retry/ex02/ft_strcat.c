/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:39:33 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/16 10:39:39 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	cpt;
	int	cpt2;

	cpt = 0;
	cpt2 = 0;
	while (dest[cpt2] != '\0')
		cpt2++;
	while (src[cpt] != '\0')
	{
		dest[cpt2] = src[cpt];
		cpt++;
		cpt2++;
	}
	dest[cpt2] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = "chocolat";
	char dest[] = "coucou";
	printf("%s\n", dest);
	ft_strcat(dest,src);
	printf("%s\n", dest);
}*/

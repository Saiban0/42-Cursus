/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:59:15 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/23 20:59:19 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	diff = max - min;
	i = 0;
	if (diff <= 0)
		return (0);
	*range = (int *)malloc((diff + 1) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (diff);
}
/*
int	main()
{
	int	*tab = NULL;
	int	taille = ft_ultimate_range(&tab, 1, 7);
	int	i;

	printf("%d\n", taille);
	i = 0;
	if (taille > 0)
	{
		while (i < taille)
		{
			printf("%d", tab[i]);
			i++;
		}
		free(tab);
	}
	return (0);
}*/

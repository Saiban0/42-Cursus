/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_ligne.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:15:05 by echapuis          #+#    #+#             */
/*   Updated: 2023/08/20 18:09:17 by echapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	verif_ligne(int tab[4][4], int ligne, int rowleft[4], int rowright[4])
{
	int	i;
	int	max;
	int	count;
	int	res;

	//res = malloc(sizeof(int));
	res = 0;
	i = 0;
	max = tab[ligne][i];
	count = 1;
	while (i < 3)
	{
		if (max < tab[ligne][i + 1])
		{
			count++;
			max = tab[ligne][i + 1];
		}
		i++;
	}
	if (rowleft[ligne] != count)
	{
		res = -1;
		return (res);
	}

	i = 3;
	max = tab[ligne][i];
	count = 1;
	while (i > 0)
	{
		if (max < tab[ligne][i - 1])
		{
			count++;
			max = tab[ligne][i - 1];	
		}
		i--;
	}
	if (rowright[ligne] != count)
	{
		res = -1;
		return (res);
	}
	res = 1;
	return (res);
}

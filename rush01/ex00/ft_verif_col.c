/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_col.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:34:51 by echapuis          #+#    #+#             */
/*   Updated: 2023/08/20 18:09:20 by echapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	verif_col(int tab[4][4], int col, int colup[4], int coldown[4])
{
	int	j;
	int	max;
	int	count;
	int	res;

	//res = malloc(sizeof(int));
	res = 0;
	j = 0;
	max = tab[j][col];
	count = 1;
	while (j < 3)
	{
		if (max < tab[j + 1][col])
		{
			count++;
			max = tab[j + 1][col];
		}
		j++;
	}
	if (colup[col] != count)
	{
		res = -1;
		return (res);
	}

	j = 3;
	max = tab[j][col];
	count = 1;
	while (j > 0)
	{
		if (max < tab[j - 1][col])
		{
			count++;
			max = tab[j - 1][j];
		}
		j--;
	}
	if (coldown[col] != count)
	{
		res = -1;
		return (res);
	}
	res = 1;
	return (res);
}

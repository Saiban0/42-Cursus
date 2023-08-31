/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:23:24 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/23 16:23:25 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	diff;

	tab = NULL;
	diff = max - min;
	i = 0;
	if (max > min)
	{
		tab = (int *)malloc((diff + 1) * sizeof(int));
		if (tab == NULL)
		{
			return (NULL);
		}
		while (i < diff)
		{
			tab[i] = min;
			i++;
			min++;
		}
		return (tab);
	}
	return (NULL);
}
/*
int	main()
{
	int	*t;
	t = ft_range(-5, 5);
	for(int i = 0; i < 10; i++)
	{
		char c;
		c = t[i] + '0';
		write(1, &c, 1);
	}
	free(t);
	return (0);
}*/

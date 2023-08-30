/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:33:29 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/13 13:33:31 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_sort_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		if (tab[i] > tab[j])
		{
			swap(tab, i, j);
			i = 0;
		}
		else if (tab[i] == 0)
			swap(tab, i, 0);
		i++;
	}
}

void	swap(int *tab, int a, int b)
{
	int tmp;

	tmp = tab[a];
	tab[a] = tab[b];
	tab[b] = tmp;
}
/*
void	print_int_array(int *arr, int size)
{
	if (size == 0)
	{
		printf("[]");
	}
	else
	{
		putchar('[');
		for (int i = 0; i < size - 1; i++)
			printf("%d, ", arr[i]);
		printf("%d]", arr[size - 1]);
	}
}

int	main(void)
{
	int	tab[9] = {5, 1, 2, 0, 9, 3, 0, 7, 6};
	int	size = 9;

	ft_rev_sort_tab(tab, size);
	print_int_array(tab, size);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:18:24 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/12 17:18:28 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
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
	int	tab[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int	size = 9;

	ft_rev_int_tab(tab, size);
	print_int_array(tab, size);
	return (0);
}*/

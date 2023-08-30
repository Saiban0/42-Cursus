/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:43:54 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/10 20:08:01 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	numbers;

	numbers = 48;
	while (numbers <= 57)
	{
		ft_putchar(numbers);
		numbers++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/

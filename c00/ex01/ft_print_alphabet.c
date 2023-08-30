/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:01:19 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/10 20:08:40 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	alph;

	alph = 97;
	while (alph < 123)
	{
		ft_putchar(alph);
		alph++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/

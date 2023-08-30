/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:27:18 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/16 17:27:20 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	printchiffre(int chiffre)
{
	char	chiffrestr;

	chiffrestr = '0' + chiffre;
	write(1, &chiffrestr, 1);
}

void	ft_putnbr(int nb)
{
	char	moins;

	moins = '-';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		write(1, &moins, 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		printchiffre(nb);
		return ;
	}
	ft_putnbr(nb / 10);
	printchiffre(nb % 10);
}

int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}

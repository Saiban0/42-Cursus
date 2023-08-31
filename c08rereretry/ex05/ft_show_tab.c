/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:04:28 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/30 11:04:29 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	printchiffre(int chiffre)
{
	char	chiffrestr;

	chiffrestr = '0' + chiffre;
	write(1, &chiffrestr, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		printchiffre(nb);
		return ;
	}
	ft_putnbr(nb / 10);
	printchiffre(nb % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	char	size;

	i = 0;
	while (par[i].str != 0)
	{
		size = par[i].size + '0';
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
/*
int main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc - 1, argv));
	return (0);
}*/

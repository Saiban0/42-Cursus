/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:59:09 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/10 20:05:31 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != 55 || b != 56 || c != 57)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = 48;
	while (c < 56)
	{
		d = c + 1;
		while (d < 57)
		{
			u = d + 1;
			while (u < 58)
			{
				print(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/

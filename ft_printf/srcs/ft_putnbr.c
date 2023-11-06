/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:27:48 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/06 14:01:29 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putdigit(unsigned long int n)
{
	printf("%s", "youpi");
	if (n > 9)
		ft_putdigit(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_putnbr(int n)
{
	long int	longn;

	longn = (long int)n;
	if (n < 0)
	{
		ft_putchar('-');
		longn = -longn;
	}
	ft_putdigit(longn);
}

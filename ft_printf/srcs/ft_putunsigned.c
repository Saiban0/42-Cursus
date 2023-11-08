/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:31:28 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/08 11:38:38 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_putdigit(unsigned long int n)
{
	if (n > 9)
		ft_putdigit(n / 10);
	ft_putchar((n % 10) + '0');
}

int	ft_putunsigned(unsigned int n)
{
	unsigned long int	longn;
	int			len;

	longn = (unsigned long int)n;
	len = 1;
	ft_putdigit(longn);
	while (longn > 9)
	{
		longn /= 10;
		len++;
	}
	return (len);
}

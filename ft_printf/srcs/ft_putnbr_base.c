/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:44:58 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/08 12:13:59 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_base(int n, char *base)
{
	long int	longn;
	int			len;

	longn = (long int)n;
	len = 1;
	if (n < 0)
	{
		ft_putchar('-');
		len++;
		longn = -longn;
	}
	ft_putdigit(longn);
	while (longn > 9)
	{
		longn /= 10;
		len++;
	}
	return (len);
}
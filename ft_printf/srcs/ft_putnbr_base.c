/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:44:58 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/08 13:54:40 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_putdigit(unsigned long int n, char *base, int base_len)
{
	if (n >= (unsigned long int)base_len)
		ft_putdigit(n / base_len, base, base_len);
	ft_putchar(base[n % base_len]);
}

int	ft_putnbr_base(unsigned int n, char *base)
{
	long int	longn;
	int			len;
	int			base_len;

	longn = (long int)n;
	len = 1;
	base_len = (int)ft_strlen(base);
	ft_putdigit(longn, base, base_len);
	while (longn >= base_len)
	{
		longn /= base_len;
		len++;
	}
	return (len);
}
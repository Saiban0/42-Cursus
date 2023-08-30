/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:16:33 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/25 20:16:38 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int			i;
	long int	n;

	n = (long int)nb;
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n < 2)
		return (0);
	i = 3;
	while (i < n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	if (nb == 2)
	{
		return (2);
	}
	if (i % 2 == 0)
	{
		i++;
	}
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	while (i <= 2147483647)
	{
		if (ft_is_prime(i))
		{
			return (i);
		}
		i += 2;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(2147483640));
	return (0);
}*/

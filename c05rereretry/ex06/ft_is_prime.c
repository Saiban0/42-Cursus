/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 19:48:17 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/25 19:48:23 by bchedru          ###   ########.fr       */
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
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*S
int	main(void)
{
	printf("%d", ft_is_prime(233));
	return (0);
}*/

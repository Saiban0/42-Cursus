/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:25:01 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/18 10:40:30 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_atoi(const char *nb)
{
	int	value;
	int	i;
	int	sign;

	value = 0;
	i = 0;
	sign = 1;
	while (nb[i] == ' ')
		i++;
	while(nb[i] == '+' || nb[i] == '-')
	{
		i++;
		if (nb[i] == '-')
			sign *= -1;
	}
	while(nb[i] >= '0' && nb[i] <= '9')
	{
		value = (value * 10 + nb[i] - '0');
		i++;
	}
	return (value * sign);
	
	
}
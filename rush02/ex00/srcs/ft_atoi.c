/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:34:04 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/27 11:34:06 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*del_space(char *str)
{
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
	{
		str++;
	}
	return (str);
}

unsigned long int	ft_atoi(char *str)
{
	unsigned long int	x;

	x = 0;
	str = del_space(str);
	while (*str && (*str >= '0' && *str <= '9'))
	{
		x = x * 10 + (*str - '0');
		str++;
	}
	return (x);
}

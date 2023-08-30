/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:19:59 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/14 20:20:01 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void) {
	char	*str;

	str = "coucou";
	printf("%d",ft_str_is_uppercase(str));
	return (0);
}*/

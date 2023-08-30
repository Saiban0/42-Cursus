/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:14:36 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/14 20:14:37 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void) {
	char	*str;

	str = "COUCOU";
	printf("%d",ft_str_is_lowercase(str));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:22:16 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/14 20:22:18 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str > 31 && *str != 127)
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void) {
	char	*str;

	str = '\n';
	printf( ft_str_is_printable(str), 1);
	return (0);
}*/

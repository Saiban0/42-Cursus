/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:35:01 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/08 13:58:09 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return(write(1, "(null)", 6));
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return(i);
}

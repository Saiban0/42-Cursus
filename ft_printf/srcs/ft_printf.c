/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:12:16 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/06 17:47:25 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list args;
	va_start(args, str);
	if (ft_strlen(str) != 2)
		return(0);
	if (*str++ == 'c' || str++)
		ft_putchar(va_arg(args, int));
	else if (*str++ == 's')
		ft_putstr(va_arg(args, char*));
	else if (*str++ == 'd' || *str++ == 'i' || *str++ == 'u')
		ft_putnbr(ft_atoi(va_arg(args, char *)));
	/*else if (str++ == 'p')
		ft_putstr();
	else if (str++ == 'x')
	
	else if (str++ == 'X')
	
	else if (str++ == '%')
	*/
	else
		return (0);
	va_end(args);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_printf("%c", argv[1]);
	return 0;
}

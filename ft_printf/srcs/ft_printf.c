/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:12:16 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/08 11:29:07 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	checkprint(const char str, va_list args)
{
	if (str == 'c')
		return(ft_putchar(va_arg(args, int)));
	else if (str == 's')
		return(ft_putstr(va_arg(args, char *)));
	else if (str == 'd' || str == 'i')
		return(ft_putnbr(va_arg(args, int)));
	else if (str == 'u')
		return(ft_putnbr(va_arg(args, unsigned int)));
	/*else if (str++ == 'p')
		ft_putstr();
	else if (str++ == 'x')
		
	else if (str++ == 'X')
	*/	
	else if (str == '%')
		return(ft_putchar('%'));
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int		i;
	int		res;

	i = 0;
	res = 0;
	va_start(args, str);
	while(str[i])
	{
		if(str[i] == '%')
		{
			res += checkprint(str[i + 1], args);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			res++;
		}
		i++;
	}
	/*while(str[i] != '%' && str[i])
		i++;
	res = checkprint(str[i + 1], args);*/
	va_end(args);
	return (res);
}
/*
int	main(void)
{

	printf("ft_ : %d\n", ft_printf("%%", '%'));
	printf("st_ : %d", printf("%%", '%'));
	return 0;
}*/

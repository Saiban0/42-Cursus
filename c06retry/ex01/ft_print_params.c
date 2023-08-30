/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:56:54 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/22 17:56:56 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	char	new;
	int		i;

	(void)argc;
	i = 1;
	new = '\n';
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write(1, &new, 1);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:14:02 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/22 18:14:03 by bchedru          ###   ########.fr       */
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
	int		i;
	char	new;

	i = argc - 1;
	new = '\n';
	while (argv[i] != argv[0])
	{
		ft_putstr(argv[i]);
		write(1, &new, 1);
		i--;
	}
	return (0);
}

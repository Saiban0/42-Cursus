/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:59:15 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/27 15:59:58 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	save_line_if(char **argv, int count)
{
	unsigned long int		num;
	t_dict					*dict_;

	if (ft_atoi(argv[1]) < 0 || !ft_str_is_numeric(argv[1]))
	{
		ft_putstr("Error\n");
		return ;
	}
	dict_ = create_strct("numbers.dict");
	num = ft_atoi(argv[1]);
	test(dict_, &num, 100, &count);
	free(dict_);
}

void	save_line_else(char **argv, int count)
{
	unsigned long int		num;
	char					*dict;
	t_dict					*dict_;

	dict = ft_strdup(argv[1]);
	dict_ = create_strct(dict);
	num = ft_atoi(argv[2]);
	test(dict_, &num, 100, &count);
	free(dict);
	free(dict_);
}

int	main(int argc, char **argv)
{
	int	count;

	count = 1;
	if (argc == 2)
		save_line_if(argv, count);
	else if (argc == 3)
	{
		save_line_else(argv, count);
	}
	else
		ft_putstr("erreur trop/pas d'arguments\n");
	return (0);
}

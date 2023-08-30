/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameddah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:04:50 by ameddah           #+#    #+#             */
/*   Updated: 2023/08/27 15:04:54 by ameddah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	print(t_dict *dict_, unsigned long int num, int boolean)
{
	int	i;

	i = 0;
	if (boolean == 1 && num == 0)
		return (0);
	while (dict_[i].ltr != NULL)
	{
		if (dict_[i].nb == num)
		{
			ft_putstr(dict_[i].ltr);
		}
		i++;
	}
	return (1);
}

void	test3(t_dict *dict_, unsigned long int *num, int *count, int boolean)
{
	unsigned long int	to_print;

	if (*num >= 20)
	{
		to_print = (*num / 10) * 10;
		if (print(dict_, to_print, 1) != 0)
			ft_putstr(" ");
		*num = *num % 10;
		test3(dict_, num, count, boolean);
	}
	else
		print(dict_, *num, 1);
}

void	test2(t_dict *dict_, unsigned long int *num, unsigned long int x,
		int *count)
{
	unsigned long int	to_print;
	int					y;

	to_print = *num / x;
	*num = *num - to_print * x;
	y = print(dict_, to_print, 1);
	if (y != 0)
		ft_putstr(" ");
	if (*count % 3 == 2)
	{
		while (x > 1000)
		{
			x = x / 1000;
		}
	}
	if (y != 0)
	{
		print(dict_, x, 1);
		ft_putstr(" ");
	}
}

void	test1(t_dict *dict_, unsigned long int *num, unsigned long int x)
{
	unsigned long int	temp;
	unsigned long int	to_print;

	to_print = *num / x;
	temp = *num;
	*num = *num - to_print * x;
	while (temp > 1000)
	{
		temp = temp / 1000;
	}
	if (temp >= 20)
	{
		to_print = (temp / 10) * 10;
		if (print(dict_, to_print, 1) != 0)
			ft_putstr(" ");
	}
	else
	{
		if (print(dict_, temp, 1) != 0)
			ft_putstr(" ");
	}
}

void	test(t_dict *dict_, unsigned long int *num, \
	unsigned long int x, int *count)
{
	int	boolean;

	boolean = 1;
	if (*num == 0)
		boolean = 0;
	*count += 1;
	if (*num >= x)
	{
		test(dict_, num, x * 10, count);
		if (*count % 3 == 1)
			test1(dict_, num, x);
		else
			test2(dict_, num, x, count);
	}
	if (*num < 100)
		test3(dict_, num, count, boolean);
	*count -= 1;
}

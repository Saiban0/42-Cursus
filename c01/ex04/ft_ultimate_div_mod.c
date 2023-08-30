/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:57:42 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/11 12:10:59 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}
/*
void    main(void)
{
    int    a;
    int    b;

    a = 12;
    b = 10;
    printf("a avant : %d\n", a);
    printf("b avant : %d\n", b);
    ft_ultimate_div_mod(&a,&b);
    printf("------------- \n");
    printf("apres : %d,%d\n", a, b);
    return ;
}*/

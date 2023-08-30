/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:38:14 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/11 11:55:21 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
void    main(void)
{
    int    a;
    int    b;
    int    div;
    int    mod;

    a = 5;
    b = 10;
    div = 0;
    mod = 0;

    printf("div avant : %d\n", div);
    printf("mod avant : %d\n", mod);
    ft_div_mod(&a,&b,&div,&mod);
    printf("------------- \n");
    printf("apres : %d,%d\n", div, mod);
    return ;
}*/

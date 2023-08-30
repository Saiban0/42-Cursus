/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:08:21 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/14 15:09:02 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char src[] = "fuwh2fehfoejhkegrjkf2ehjldhlfejhlghkgjekk2fhlefe;2jlfe;2jl";
    char dest[] = "";

    printf("%s\n", dest);
    ft_strcpy(dest, src);
    printf("%s\n", dest);
    return 0;
}*/

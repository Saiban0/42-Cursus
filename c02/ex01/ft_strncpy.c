/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:53:19 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/14 16:53:23 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	char	*dest_start;

	dest_start = dest;
	while (n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_start);
}
/*
int main() {
    char source[] = "J'aime les merguez";
    char destination[17];

    unsigned int n = 20;

    ft_strncpy(destination, source, n);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
*/

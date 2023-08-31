/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:57:14 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/24 13:57:15 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	if (size == 0)
		return (1);
	i = 0;
	res = 0;
	while (i < size)
		res += ft_strlen(strs[i++]);
	res += ft_strlen(sep) * (size - 1);
	return (res + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int		cpt;
	int		cpt2;

	cpt = 0;
	cpt2 = 0;
	while (dest[cpt2] != '\0')
		cpt2++;
	while (src[cpt] != '\0')
	{
		dest[cpt2] = src[cpt];
		cpt++;
		cpt2++;
	}
	dest[cpt2] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	res = malloc(get_malloc_size(size, strs, sep) * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '\0';
	if (size == 0)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	res[ft_strlen(res)] = '\0';
	return (res);
}
/*
int        main(void)
{
    char    *strs[] = {"Hello", "world", "this", "is", "a", "test"};
    char    *sep = "---";
    int        size = 6;
    char     *result = ft_strjoin(size, strs, sep);

    printf("Result: %s\n", result);
    free(result);
    return 0;
}*/

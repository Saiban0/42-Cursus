/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:13:50 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/16 11:13:52 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	res;

	res = 0;
	while (*str)
	{
		res += 1;
		str++;
	}
	return (res);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	jmax;

	i = 0;
	j = 0;
	jmax = ft_strlen(to_find);
	if (jmax == 0)
		return (str);
	while (str[i] != '\0' || j == jmax)
	{
		if (j == jmax)
			return (to_find);
		else if (str[i] == to_find[j])
		{
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str1[] = "e,.jfhwieauhfhth";
	char str2[] = "hth";
	char *jaaj = ft_strstr(str1, str2);

	printf("ft_strstr : %s\n", jaaj);
	printf("strstr : %s\n", strstr(str1, str2));
	return (0);
}*/

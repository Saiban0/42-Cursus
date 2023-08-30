/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:36:03 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/15 11:36:06 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	alpha_or_num(char str)
{
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
		return (1);
	else if (str >= 48 && str <= 57)
		return (1);
	else
		return (0);
}

int	is_lowercase(char str)
{
	if (str >= 97 && str <= 122)
		return (1);
	else
		return (0);
}

int	is_uppercase(char str)
{
	if (str >= 65 && str <= 90)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if ((is_lowercase(str[i]) == 1) && alpha_or_num(str[i - 1]) == 0)
			str[i] -= 32;
		else if ((is_uppercase(str[i]) == 1) && alpha_or_num(str[i - 1]) == 1)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(void) {
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s",ft_strcapitalize(str));
	return (0);
}*/

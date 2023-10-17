/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:09:39 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/17 12:55:59 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = '/0';
	if (c == '/0')
		return(s + ft_strlen(s));
	while(*s)
	{
		if (*s == c)
			temp = &s;
		s++;
	}
	if(temp == '/0')
		return (NULL);
	return(temp);
}

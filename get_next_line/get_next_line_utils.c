/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:41:10 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/26 00:39:51 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_linelen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_extractline(t_buff *buff_struct)
{
	char	*res;
	int		i;

	i = 0;
	while (i < BUFFER_SIZE && buff_struct->buffer[i] != '\n')
	{
		res[i] = buff_struct->buffer[i];
		i++;
	}
	if (buff_struct->buffer[i] == '\n')
	{
		res[i] = '\n';
		buff_struct->endline = 1;
		if (buff_struct->buffer[i + 1])
			res[i + 1] = '\0';
	}
	res[i] = '\0';
	return (res);
}

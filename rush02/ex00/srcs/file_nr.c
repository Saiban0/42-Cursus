/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_nr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:23:56 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/26 20:23:57 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	file_nr(char *dict)
{
	int		fd;
	char	buffer[1];
	int		i;

	i = 0;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Impossible d'ouvrir le fichier");
		return (-1);
	}
	while ((read(fd, buffer, sizeof(buffer))) > 0)
	{
		if (buffer[0] == '\n')
		{
			i++;
		}
	}
	close(fd);
	return (i);
}

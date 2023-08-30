/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_strct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:21:36 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/27 21:21:42 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

char	*ft_nospace(char *src)
{
	while ((*src >= 9 && *src <= 13) || *src == ' ')
	{
		src++;
	}
	return (src);
}

void	create_strct3(char *ligne, int *lineindex, t_dict *res, int i)
{
	char				*ltr;
	unsigned long int	nb;

	ligne[*lineindex] = '\0';
	nb = ft_atoi(fake_split(ligne)[0]);
	ltr = ft_nospace(fake_split(ligne)[1]);
	free(fake_split(ligne)[0]);
	free(fake_split(ligne)[1]);
	free(fake_split(ligne));
	res[i].nb = nb;
	res[i].ltr = ltr;
	free(ligne);
	ligne = (char *)malloc(100 * sizeof(char));
	*lineindex = 0;
}

void	create_strct2(int fd, t_dict *res)
{
	int		i;
	int		*lineindex;
	char	*ligne;
	char	buffer[1];

	ligne = malloc(100 * sizeof(char));
	lineindex = (int *)malloc(sizeof(int));
	*lineindex = 0;
	i = 0;
	while (read(fd, buffer, sizeof(buffer)) > 0)
	{
		if (buffer[0] == '\n')
		{
			ligne[*lineindex] = '\0';
			create_strct3(ligne, lineindex, res, i++);
		}
		else
		{
			ligne[(*lineindex)++] = buffer[0];
		}
	}
	free(ligne);
	free(lineindex);
	res[i].nb = 0;
	res[i].ltr = NULL;
}

struct s_dict	*create_strct(char *dict)
{
	int		fd;
	int		n;
	t_dict	*res;

	n = file_nr(dict);
	res = malloc(n * sizeof(t_dict));
	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Impossible d'ouvrir le fichier");
	}
	create_strct2(fd, res);
	close(fd);
	return (res);
}

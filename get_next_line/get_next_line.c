/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:40:54 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/23 17:19:25 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*line;
	int			bytes_read;

	line = ft_extractline(buffer, ft_sublen(buffer));
	if (line)
		ft_putstr(line);
	free(line);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read > 0 && bytes_read < BUFFER_SIZE)
	{
		ft_postprocess(buffer, bytes_read);
		return (NULL);
	}
	else if (bytes_read <= 0)
		line = NULL;
	return (line);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

void	ft_postprocess(char *buffer, int len)
{
	int		i;

	i = 0;
	while(buffer[i] && i < len)
	{
		write(1, &buffer[i], 1);
		i++;
	}
}


int main(int argc, char **argv)
{
	int	fd;
	char *line;
	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	while (line)
		line = get_next_line(fd);
	close(fd);
	return (0);
}
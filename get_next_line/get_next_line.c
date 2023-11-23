/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:40:54 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/22 17:58:50 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*line;
	int			bytes_read;

	line = ft_substr(buffer, ft_sublen(buffer));
	if (line)
		ft_putstr(line);
	free(line);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read < 0 || bytes_read > BUFFER_SIZE)
		return (NULL);
	if (bytes_read == 0)
	{
		ft_bzero(buffer, BUFFER_SIZE);
		return (NULL);
	}
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


int main(void)
{
	int	fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
		line = get_next_line(fd);
	close(fd);
	return (0);
}
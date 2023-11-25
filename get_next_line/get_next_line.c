/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:40:54 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/26 00:40:27 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*A Recommencer*/
char	*get_next_line(int fd)
{
	static t_buff	*buff_struct;
	char			*line;
	int				bytes_read;

	if (!buff_struct->endline)
		buff_struct->endline = 0;
	line = ft_extractline(buff_struct);
	if (line && buff_struct->endline == 1)
	{
		ft_putstr(line);
		buff_struct->endline = 0;
		return (line);
	}
	bytes_read = read(fd, buff_struct->buffer, BUFFER_SIZE);
	if (bytes_read > 0 && bytes_read < BUFFER_SIZE)
	{
		ft_postprocess(buff_struct->buffer, bytes_read);
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
	int	i;

	i = 0;
	while (buffer[i] && i < len)
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

/*char *read_line(int fd) {
    static char buffer[BUFFER_SIZE];
    ssize_t bytes_read;
    char *newline_pos;

    bytes_read = read(fd, buffer, BUFFER_SIZE - 1);
    if (bytes_read <= 0) return NULL;

    buffer[bytes_read] = '\0';
    newline_pos = strchr(buffer, '\n');
    if (newline_pos != NULL) *newline_pos = '\0';

    return buffer;
}

void read_file_line_by_line(char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        write(2, "Could not open file\n", 20);
        return;
    }

    char *line;
    while ((line = read_line(fd)) != NULL) {
        write(1, line, strlen(line));
        write(1, "\n", 1);
    }

    close(fd);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:18:45 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/27 19:26:43 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
char *ft_process_buffer(char *buffer) 
{
	char *current_position;

	current_position = NULL;
	if (buffer != NULL)
		current_position = buffer;
	if (!current_position)
		return (NULL);
	while (*current_position != '\n' && *current_position != '\0')
		current_position++;
	return (current_position);
}*/

t_buff	*ft_read_line(int fd, t_buff *buff_struct)
{
	size_t bytes_read;

	buff_struct->endline = 0;
	bytes_read = read(fd, buff_struct->buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (free(buff_struct), NULL);
	if (ft_isnl(buff_struct->buffer, '\n'))
		buff_struct->endline = 1;
	return (buff_struct);
}

char *get_next_line(int fd)
{
	static t_buff	*line;
	int				i;

	i = 0;
	if (fd < 0)
	{
		write(1, "Could not open file\n", 20);
		return (NULL);
	}
	line = (t_buff *)malloc(sizeof(t_buff));
	if (!line)
		return (NULL);
	if (line->endline == 1)
		ft_memmove(line->buffer,ft_strchr(line->buffer, '\n'), BUFFER_SIZE);
	else
		line = ft_read_line(fd, line);
	while (line != NULL && line->endline == 0 && i++ < ft_linelen(line->buffer))
	{
		line = ft_read_line(fd, line);
		ft_putstr(line->buffer);
	}
	if(!line)
		return (NULL);
	return(line->buffer);
}



int main(int argc, char **argv)
{
	int	fd;
	char *line;
	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	free(line);
	/*while (line)
	{
		line = get_next_line(fd);
		free(line);
	}*/
	close(fd);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:18:45 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/30 18:29:13 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1] = {"\0"};
	int			bytes_read;
	char		*line;

	line = ft_calloc(1, 1);
	if (!line)
		return (NULL);
	bytes_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(line), NULL);
	if (buffer[0] != '\0')
	{
		line = ft_strjoin(line, buffer);
		if (!line)
			return (free(line), NULL);
		if (ft_find_n(line) > -1)
			line[ft_find_n(line) + 1] = '\0';
	}
	while (ft_find_n(line) == -1 && bytes_read != 0)
	{
		buffer[0] = '\0';
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(line), NULL);
		buffer[bytes_read] = '\0';
		line = ft_strjoin(line, buffer);
		if (!line)
			return (free(line), NULL);
	}
	if (ft_find_n(line) > -1)
		line[ft_find_n(line) + 1] = '\0';
	if (ft_find_n(buffer) > -1)
		ft_strcpy(buffer, buffer + ft_find_n(buffer) + 1);
	if (line[0] == '\0')
		return(free(line), NULL);
	return (line);
}

// int main(int argc, char **argv)
// {
// 	int	fd;
// 	static char *line = NULL;
// 	int i = 0;
// 	(void)argc;
// 	fd = open(argv[1], O_RDONLY);
// 	if (fd == -1)
// 		return (1);
// 	while (i < 20)
// 	{
// 		line = get_next_line(fd);
// 		// if (line[0] == '\0')
// 		// 	break ;
// 		printf("%s", line);
// 		free(line);
// 		i++;
// 	}
// 	close(fd);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:18:45 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/29 12:23:49 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	buffer = ft_process_file(fd, buffer);
	if (buffer == NULL || buffer[0] == '\0')
		return (NULL);
	line = ft_get_line(buffer);
	buffer = ft_save_line(line);
	return (line);
}

char	*ft_process_file(int fd, char *buffer)
{
	char	*tmp;
	int		x;

	tmp = malloc(BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	x = 1;
	while (x > 0)
	{
		if ( x <= 0)
		{
			x = read(fd, tmp, BUFFER_SIZE);
			if (x == -1)
			{
				free(tmp);
				return (NULL);
			}
			return (buffer);
		}
		tmp[x] = '\0';
		buffer = ft_strjoin(buffer, tmp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (buffer);
}

char	*ft_get_line(char *buffer)
{
	int		i;
	char	*line;

	i = 0;
	while (buffer[i] != '\n' && buffer[i])
		i++;
	line = malloc((i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] != '\n' && buffer[i])
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}
char	*ft_save_line(char *line)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (line[i] != '\n' && line[i])
		i++;
	if (line[i] == '\n')
		i++;
	tmp = malloc(i + 1);
	if (!tmp)
		return (NULL);
	while (line[i])
	{
		tmp[j] = line[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	free(line);
	return (tmp);
}

int main(int argc, char **argv)
{
	int	fd;
	char *line;
	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	/*while (line)
	{
		line = get_next_line(fd);
		free(line);
	}*/
	close(fd);
	return (0);
}
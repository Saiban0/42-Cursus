/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:18:45 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/29 17:51:08 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buffer = {"\0"};
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
		return (NULL);
	buffer = ft_process_file(fd, buffer);
	if (buffer == NULL || buffer[0] == '\0')
		return (NULL);
	line = ft_get_line(buffer);
	buffer = ft_save_line(buffer, line);
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
		x = read(fd, tmp, BUFFER_SIZE);
		if (x <= 0)
		{
			if (x == -1)
			{
				free(tmp);
				return (NULL);
			}
			return (buffer);
		}
		tmp[x + 1] = '\0';
		buffer = ft_strjoin(buffer, tmp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (buffer);
}

char	*ft_get_line(char *buffer)
{
	char	*line;
	int		len;
	int		i;

	if (!buffer)
		return (NULL);
	len = 0;
	while (buffer[len] && buffer[len] != '\n')
		len++;
	line = malloc(len + 2);
	i = -1;
	while (++i < len)
		line[i] = buffer[i];
	if (buffer[i] == '\n')
		line[i] = '\n';
	line[i + 1] = '\0';
	return (line);
}

char	*ft_save_line(char *buffer, char *line)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (line[i])
		i++;
	if (!buffer[i])
		return (NULL);
	tmp = malloc(ft_strlen(buffer) - i + 1);
	if (!tmp)
		return (NULL);
	while (buffer[i])
		tmp[j++] = buffer[i++];
	tmp[j++] = '\0';
	return (tmp);
}


int main(int argc, char **argv)
{
	int	fd;
	static char *line = NULL;
	(void)argc;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		printf("%s\n", line);
	}
	//free(line);
	close(fd);
	return (0);
}
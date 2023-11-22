/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:40:54 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/22 12:56:07 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
char	*get_next_line(int fd)
{
	char		 	buffer[BUFFER_SIZE];
	static char 	stash[BUFFER_SIZE];
	int				bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	ft_strlcpy(stash, buffer, BUFFER_SIZE);
	//printf("avant: -> %s\n", stash);
	if (bytes_read == BUFFER_SIZE)
	{
		if (is_next_line(stash))
		{
			ft_putstr(ft_substr(stash, 0, (ft_strchr(stash, '\n') - stash)));
			write(1, "\n", 1);
			ft_strlcpy(stash, (ft_strchr(stash, '\n') + 1), BUFFER_SIZE);
			//printf("apres -> %s\n", stash);
		}
		else
			ft_putstr(stash);
		return (stash);
	}
	else if (bytes_read == 0)
		return (stash);
	else
		return (NULL);
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
}
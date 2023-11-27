/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:44:07 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/27 19:17:46 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_buff
{
	char	buffer[BUFFER_SIZE];
	int		endline;
}				t_buff;

char	*get_next_line(int fd);
int		ft_isnl(const char *s, int c);
int		ft_strlen(char *str);
void	ft_putstr(char *s);
t_buff	*ft_read_line(int fd, t_buff *buff_struct);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:44:07 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/26 00:32:31 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_buff
{
	char	buffer[BUFFER_SIZE];
	int		endline;
}				t_buff;

char	*get_next_line(int fd);
int		ft_linelen(char *str);
int		ft_strlen(char *str);
char	*ft_extractline(t_buff *buffer);
void	ft_putstr(char *s);
void	ft_postprocess(char *buffer, int len);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:22:19 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/26 18:22:47 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H
# define FT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dict
{
	unsigned long int	nb;
	char				*ltr;
}t_dict;

char				**fake_split(char *str);
int					ft_str_is_numeric(char *str);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
char				*ft_process_file(int fd);
char				*ft_strncat(char *src, char *dest, int size);
unsigned long int	ft_atoi(char *str);
int					file_nr(char *dict);
int					max_car(char *dict);
char				**fake_split(char *str);
struct s_dict		*create_strct(char *dict);
char				*ft_strdup(char *src);
int					print(t_dict	*dict_, \
	unsigned long int num, int boolean);
void				test3(t_dict	*dict_, unsigned long int *num, \
	int *count, int boolean);
void				test2(t_dict *dict_, unsigned long int *num, \
	unsigned long int x, int *count);
void				test1(t_dict *dict_, unsigned long int *num, \
	unsigned long int x);
void				test(t_dict	*dict_, unsigned long int *num, \
	unsigned long int x, int *count);

#endif

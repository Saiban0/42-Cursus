/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:00:33 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/17 10:50:08 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(unsigned char str);
int	ft_isdigit(unsigned char str);
int	ft_isalnum(unsigned char str);
int	ft_isascii(unsigned char str);
int	ft_isprint(unsigned char str);
int	ft_strlen(char *str);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
size_t	*ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);




#endif

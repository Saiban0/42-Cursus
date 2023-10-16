#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(unsigned char str);
int	ft_isdigit(unsigned char str);
int	ft_isalnum(unsigned char str);
int	isascii(unsigned char str);
int	ft_isprint(unsigned char str);
int	ft_strlen(char *str);
void	*ft_memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);



#endif

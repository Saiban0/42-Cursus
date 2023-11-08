/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:07:43 by bchedru           #+#    #+#             */
/*   Updated: 2023/11/08 13:54:39 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putunsigned(unsigned int n);
int		ft_putnbr_base(unsigned int n, char *base);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *str);

#endif
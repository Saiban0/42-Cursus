/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:31:34 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/17 00:13:21 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0; 
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
	return (s);
}
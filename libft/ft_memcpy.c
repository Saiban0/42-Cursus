/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:57:11 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/17 00:13:19 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	if ((unsigned char *)dest > (const char *)src 
	&& (unsigned char *)dest < (const char *)src + n)
		return (ft_memmove(dest, src, n));
	i = 0;
	while(i < n)
	{
		((unsigned char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
		((unsigned char *)dest)[i] = '/0';
	return (n);
}
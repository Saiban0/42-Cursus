/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:53:34 by bchedru           #+#    #+#             */
/*   Updated: 2023/10/18 11:35:49 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"


int     ft_isalpha(unsigned char str)
{
        return ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'));
}

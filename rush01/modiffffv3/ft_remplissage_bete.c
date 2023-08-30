/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remplissage_bete.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:07:05 by echapuis          #+#    #+#             */
/*   Updated: 2023/08/20 13:46:05 by echapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_remplissage_bete_colup(int tab[4][4], int colup[4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (colup[i] == 1)
			tab[0][i] = 4;
		if (colup[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				tab[0][j] = j + 1;
				j++;
			}
		}
		i++;
	}
}

void	ft_remplissage_bete_coldown(int tab[4][4], int coldown[4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (coldown[i] == 1)
		{
			tab[3][i] = 4;
		}
		if (coldown[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				tab[3][j] = j + 1;
				j++;
			}
		}
		i++;
	}
}

void	ft_remplissage_bete_rowright(int tab[4][4], int rowright[4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (rowright[i] == 1)
			tab[i][3] = 4;
		if (rowright[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				tab[j][3] = j + 1;
				j++;
			}
		}
		i++;
	}
}

void	ft_remplissage_bete_rowleft(int tab[4][4], int rowleft[4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (rowleft[i] == 1)
			tab[i][0] = 4;
		if (rowleft[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				tab[j][0] = j + 1;
				j++;
			}
		}
		i++;
	}
}

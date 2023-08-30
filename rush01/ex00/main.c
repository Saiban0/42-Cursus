/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboyreau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 07:27:47 by aboyreau          #+#    #+#             */
/*   Updated: 2023/08/19 18:59:22 by aboyreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	display(int tab[4][4]);
void	init(int tab[4][4]);
void	debug(int tab[4][4], int colup[4], int coldown[4], int rowleft[4], int rowright[4]);
int	constraints_valid(int colup[4], int coldown[4], int rowleft[4], int rowright[4]);
void    ft_remplissage_bete(int tab[4][4], int colup[4], int coldown[4], int rowleft[4], int rowright[4]);
int backtrack(int tab[4][4]);
void	ft_remplissage_bete(int tab[4][4], int colup[4], int coldown[4], int rowleft[4], int rowright[4]);

int	main(int argc, char **argv)
{
	int	plateau[4][4];
	int	colup[4];
	int	coldown[4];
	int	rowleft[4];
	int	rowright[4];
	int	i;
	
	init(plateau);
	if (argc == 2)
	{
		i = 0;
		while (i < 8)
		{
			colup[i / 2] = argv[1][i] - '0';
			i += 2;
		}
		i = 0;
		while (i < 8)
		{
			coldown[i / 2] = argv[1][i + 8] - '0';
			i += 2;
		}
		i = 0;
		while (i < 8)
		{
			rowleft[i / 2] = argv[1][i + 16] - '0';
			i += 2;
		}
		i = 0;
		while (i < 8)
		{
			rowright[i / 2] = argv[1][i + 24] - '0';
			i += 2;
		}
	}
	if (constraints_valid(colup, coldown, rowleft, rowright))
	{
		debug(plateau, colup, coldown, rowleft, rowright);
		ft_remplissage_bete(plateau, colup, coldown, rowleft, rowright);
		write(1, "\n", 1);
		debug(plateau, colup, coldown, rowleft, rowright);
		printf("%d", backtrack(plateau));
		debug(plateau, colup, coldown, rowleft, rowright);
	}
	else
	{
		write(1, "Error\n", 6);
		// debug(plateau, colup, coldown, rowleft, rowright);
	}
}

void	display(int tab[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	init(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

/*
  1 2 3 4
1 - - - - 2

VALIDE car on a bien un un sur la premiere ligne et la premiere colonne

  1 2 3 4
2 - - - - 2

INVALIDE car la colonne 0 est positionnee a un mais la ligne 0 ne l'est pas, c'est contradictoire

les 4 derniers if verifient que les angles sont coherents.
les 4 premiers if verifient qu'il n'y a que 5 de visibilite max par ligne (je ne sais plus comment j'en suis arrive la).
*/
int	constraints_valid(int colup[4], int coldown[4], int rowleft[4], int rowright[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colup[i] + coldown[i] > 5)
			return (0);
		if (rowleft[i] + rowright[i] > 5)
			return (0);
		i++;
	}
	if (colup[0] == 1 && rowleft[0] != 1)
		return (0);
	if (coldown[0] == 1 && rowleft[3] != 1)
		return (0);
	if (colup[3] == 1 && rowright[0] != 1)
		return (0);
	if (coldown[3] == 1 && rowright[3] != 1)
		return (0);
	return (1);
}

void	debug(int tab[4][4], int colup[4], int coldown[4], int rowleft[4], int rowright[4])
{
	char	c;
	int		i;
	int		j;

	j = 0;
	write (1, "  ", 2);
	while (j < 4)
	{
		c = colup[j] + '0';
		write (1, &c, 1);
		write (1, " ", 1);
		j++;
	}
	write (1, "\n", 1);
	i = 0;
	while (i < 4)
	{
		c = rowleft[i] + '0';
		write(1, &c, 1);
		write (1, " ", 1);
		j = 0;
		while (j < 4)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			write (1, " ", 1);
			j++;
		}
		c = rowright[i] + '0';
		write(1, &c, 1);
		write (1, "\n", 1);
		i++;
	}
	j = 0;
	write (1, " ", 1);
	write (1, " ", 1);
	while (j < 4)
	{
		c = coldown[j] + '0';
		write (1, &c, 1);
		write (1, " ", 1);
		j++;
	}
	write (1, "\n", 1);
}

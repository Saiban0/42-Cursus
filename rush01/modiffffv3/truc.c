/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   truc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:09:38 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/20 18:10:05 by echapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	*check_ligne(int tab[4][4], int ligne)
{
	int	*res;
	int	i;

	res = malloc(4 * sizeof (int));
	i = 0;
	while(i < 4)
	{
		res[i] = tab[ligne][i];
		i++;
	}
	return res;
}

int	*check_colonne(int tab[4][4], int colonne)
{
	int	*res;
	int	i;

	res = malloc(4 * sizeof (int));
	i = 0;
	while(i < 4)
	{
		res[i] = tab[i][colonne];
		i++;
	}
	return res;
}

int	in_tab(int tab[4], int to_find)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if(tab[i] == to_find)
			return(1);
		i++;
	}
	return(0);
}

void	remplissage(int tab[4][4], int i, int j, int val)
{
	int	*test_ligne;
	int	*test_colonne;

	test_ligne = check_ligne(tab, i);
	test_colonne = check_colonne(tab, j);
	if(in_tab(test_ligne, val) == 0 && in_tab(test_colonne, val) == 0 &&)
	{
		free(test_ligne);
		free(test_colonne);
		tab[i][j] = val;
		if(j < 3)
			return(remplissage(tab, i, j+1, val));
		if(j==3 && i!=3)
			return(remplissage(tab, i+1, 0, val));
	}
	else
	{
		if(val < 4)
			return(remplissage(tab, i, j,val + 1));
		else
			return(remplissage(tab, i, j, 1));
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

void    init(int tab[4][4])
{
        int     i;
        int     j;

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

int	main(int argc, char **argv)
{
	//int plateau[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0,}};
	int	plateau[4][4];
	int     colup[4];
        int     coldown[4];
        int     rowleft[4];
        int     rowright[4];
        int     i;


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
	remplissage(plateau, 0, 0, 1);
	display(plateau);
	return(0);
}

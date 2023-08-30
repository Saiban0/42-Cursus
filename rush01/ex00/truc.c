/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   truc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:09:38 by bchedru           #+#    #+#             */
/*   Updated: 2023/08/20 12:09:41 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

typedef struct coord{
	int	x;
	int	y;
} Coord;

void	init(int tab[4][4]);
int	constraints_valid(int colup[4], int coldown[4], int rowleft[4], int rowright[4]);
int	backtrack(int tab[4][4]);
void	check_ligne(int tab[4][4], int ligne, int act_lin[4]);
void	check_colonne(int tab[4][4], int colonne, int act_col[4]);
int	in_tab(int tab[4], int to_find);
void	remplissage(int tab[4][4], Coord carr, int val, int colup[4], int coldown[4], int rowleft[4], int rowright[4]);
void	debug(int tab[4][4], int colup[4], int coldown[4], int rowleft[4], int rowright[4]);
int	verif_col(int tab[4][4], int col, int colup[4], int coldown[4]);
int	verif_ligne(int tab[4][4], int , int rowleft[4], int rowright[4]);


void	check_ligne(int tab[4][4], int ligne,int act_line[4])
{
	int	i;

	i = 0;
	while(i < 4)
	{
		act_line[i] = tab[ligne][i];
		i++;
	}
}

void	check_colonne(int tab[4][4], int colonne, int act_col[4])
{
	int	i;

	i = 0;
	while(i < 4)
	{
		act_col[i] = tab[i][colonne];
		i++;
	}
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

void	remplissage(int tab[4][4], Coord carr, int val, int colup[4],int coldown[4], int rowleft[4], int rowright[4])
{

	int	verif_line;
	int	verif_colonne;
	int	is_valid;
	int	*act_line = malloc(4 * 8);
	int	act_col[4];

	if(carr.x > 4)
	{
		return ;
	}

	check_ligne(tab, carr.x, act_line);
	check_colonne(tab, carr.y, act_col);
	verif_line = verif_ligne(tab, carr.x, rowleft, rowright);
	verif_colonne = verif_col(tab, carr.y, colup, coldown);
	
	is_valid = (in_tab(act_line, val) == 0 && verif_line == 1) && (in_tab(act_col, val) == 0 && verif_colonne == 1);
	free(act_line);
	
	if(tab[carr.x][carr.y] == 0)
	{
		if(is_valid)
		{
			tab[carr.x][carr.y] = val;
			if(carr.y < 3)
			{
				carr.y++;
				return(remplissage(tab, carr, val, colup, coldown, rowleft, rowright));
			}
			if(carr.y==3 && carr.x!=3)
			{
				carr.x++;
				carr.y = 0;
				return(remplissage(tab, carr, val, colup, coldown, rowleft, rowright));
			}
		}
		else
		{
			if(val < 4)
				return(remplissage(tab, carr,val + 1, colup, coldown, rowleft, rowright));
			else
				return(remplissage(tab, carr, 1, colup, coldown, rowleft, rowright));
		}
	}
	else
	{
		if (carr.y < 3)
		{
			carr.y++;
			return(remplissage(tab,carr, val, colup, coldown, rowleft, rowright));
		}
		else if (carr.y==3 && carr.x != 3)
		{
			carr.x++;
			carr.y = 0;
			return(remplissage(tab, carr, val, colup, coldown, rowleft, rowright));
		}
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

void	ft_remplissage_bete(int tab[4][4], int colup[4], int coldown[4], int rowleft[4], int rowright[4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (colup[i] == 1)
			tab[0][i] = 4;
		if (coldown[i] == 1)
			tab[3][i] = 4;
		if (rowleft[i] == 1)
			tab[i][0] = 4;
		if (rowright[i] == 1)
			tab[i][3] = 4;
		
		if (colup[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				tab[0][j] = j + 1;
				j++;
			}
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
		if (rowleft[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				tab[j][0] = j + 1;
				j++;
			}
		}
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


int	main(int argc, char **argv)
{
	
	int	plateau[4][4];
	int	colup[4];
	int	coldown[4];
	int	rowleft[4];
	int	rowright[4];
	int	i;
	Coord	carr;

	carr.x = 0;
	carr.y = 0;
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
		ft_remplissage_bete(plateau, colup, coldown, rowleft, rowright);
		remplissage(plateau, carr, 1, colup, coldown, rowleft, rowright);
		debug(plateau, colup, coldown, rowleft, rowright);
	}
	else
	{
		write(1, "Error\n", 6);
		// debug(plateau, colup, coldown, rowleft, rowright);
	}
}


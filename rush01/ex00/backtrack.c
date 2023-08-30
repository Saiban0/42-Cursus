void    display(int tab[4][4]);

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

int check_plateau(int tab[4][4])
{
	int	i;
	int	j;
	int	resultat;

	i = 0;
	while (i < 4)
	{
		resultat = 0;
		j = 0;
		while (j < 4)
		{
			resultat += tab[i][j];
			j++;
		}
		if (resultat > 10)
			return (-1);
		else if (resultat < 10)
			return (+1);
		i++;
	}
	return (0);
}


int backtrack(int tab[4][4])
{
	int	i;
	int	j;
	int	k;
	int	status;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (tab[i][j] == 0)
			{
				k = 0;
				while (k < 4)
				{
					tab[i][j] = k;
					status = check_plateau(tab);
					if (status == 0)
						return backtrack(tab);
					else if (status == -1)
					{
						k++;
						continue ;
					}
					else
						return (1);
				}
			}
			j++;
		}
		i++;
	}
	display(tab);
	return (-1);
}

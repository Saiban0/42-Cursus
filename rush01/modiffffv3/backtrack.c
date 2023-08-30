/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:53:14 by echapuis          #+#    #+#             */
/*   Updated: 2023/08/20 12:42:08 by echapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	display(int tab[4][4]);

int	check_plateau(int tab[4][4])
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

int	backtrack(int tab[4][4])
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
						return (backtrack(tab));
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
/*
int check_plateau2(int tab[4][4])
{
        int     i;
        int     j;
        int     resultat;

        i = 0;
        resultat = 0;
        while (i < 4)
        {
                j = 0;
                while (j < 4)
                {
                        resultat += tab[i][j];
                        j++;
                }
                i++;
        }
        if (resultat > 40)
        {
                return (-1);
        }
        else if (resultat < 40)
        {
                return (+1);
        }
        return (0);
}
*/

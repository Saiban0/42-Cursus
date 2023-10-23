#include"libft.h"
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	**temp;
	int		i;

	i = 0;
	temp = ft_split("j'aime les choux a la creme", ' ');
	while (temp[i])
	{
		printf("%s", temp[i]);
		i++;
	}
	free(temp);
	return(0);
}
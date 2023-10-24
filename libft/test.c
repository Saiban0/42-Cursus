#include"libft.h"
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	**temp;
	int		i;

	i = 0;
	temp = ft_split("nonempty", '\0');
	while (temp[i])
	{
		printf("%s", temp[i]);
		free(temp[i]);
		i++;
	}
	free(temp);
	return(0);
}
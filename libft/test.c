#include"libft.h"
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	*temp;

	temp = ft_itoa(-424242);
	printf("%s", temp);
	free(temp);
	return(0);
}
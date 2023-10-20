#include"libft.h"
#include<stdio.h>
#include<string.h>

int	main(void)
{
	/*char s[] = "tripouille";*/

	printf("%s", ft_strrchr("teste", '\0'));
	write(1,"\n", 1);
	printf("%s", strrchr("teste", '\0'));

	return(0);
}
#include"libft.h"
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char s[] = "tripouille";

	printf("%s", ft_strchr(s, 't'+ 256));
	write(1,"\n", 1);
	printf("%s", strchr(s, 't' + 256));

	return(0);
}
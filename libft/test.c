#include"libft.h"
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char *s = "oskour";
	char *d = NULL;

	printf("%p", ft_memmove(&s, &d, 0));
	printf("%p", memmove(&s, &d, 0));
	return(0);
}
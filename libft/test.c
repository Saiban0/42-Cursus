#include"libft.h"
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char b[0xF0];

	printf("%s", (char *)ft_memmove(((void *)0), b, 5));
	write(1,"\n", 1);
	/*printf("%s", (char *)memmove(((void *)0), b, 5));*/

	return(0);
}
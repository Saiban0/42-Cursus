#include"libft.h"
#include<stdio.h>
#include<string.h>


int	main(void)
{
	printf("%s", ft_strnstr("j'aime les bananes", "bananes", 5));
	printf("%s", strnstr("j'aime les bananes", "bananes", 5));
	return(0);
}
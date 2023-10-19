#include"libft.h"
#include<stdio.h>
#include<bsd/string.h>

int	main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	if (dest != ft_memmove(dest, src, 8))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
	write(1,"\n", 1);
	printf("%s", (unsigned char *)ft_memmove(dest, src, 8));

	return(0);
}
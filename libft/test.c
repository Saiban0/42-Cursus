#include"libft.h"
#include<stdio.h>
#include<bsd/string.h>

int	main(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);

	printf("%zu", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
	printf("%s", "\n");
	printf("%zu", strlcpy(dest, "lorem ipsum dolor sit amet", 0));
	return(0);
}
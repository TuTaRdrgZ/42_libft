
#include "libft.h"
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s", ft_strnstr(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}


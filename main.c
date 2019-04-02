//
// Created by Dave Van bochove on 2019-03-18.
//

#include "includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *binary;
	binary = ft_int_to_binary(ft_atoi(argv[1]));
	if (argc != 2)
		return (0);
	printf("%d\n", ft_bit_to_max_int(ft_atoi(argv[1])));
	printf("%s", binary);
	return (0);
}

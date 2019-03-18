//
// Created by Dave Van bochove on 2019-03-18.
//

#include "includes/libft.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_bit_to_max_int(ft_atoi(argv[1]));
	ft_int_to_binary(ft_atoi(argv[1]));
	return (0);
}

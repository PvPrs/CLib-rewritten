//
// Created by Dave Van bochove on 21/01/2019.
//

#include "libft.h"

void		ft_putstr(char const *s)
{
	int index;

	index = 0;
	while (s[index])
	{
		write(1, &s[index], 1);
		index++;
	}
}
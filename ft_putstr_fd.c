//
// Created by Dave Van bochove on 21/01/2019.
//

#include "libft.h"

void		ft_putstr_fd(char const *s, int fd)
{
	int index;

	index = 0;
	while (s[index])
	{
		write(fd, &s[index], 1);
		index++;
	}
}
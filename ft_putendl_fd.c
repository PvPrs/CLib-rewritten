//
// Created by Dave Van bochove on 21/01/2019.
//

#include "libft.h"

void		ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s);
	write(fd, "\n", 1);
}
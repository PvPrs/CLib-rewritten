//
// Created by Dave Van bochove on 21/01/2019.
//

#include "libft.h"

void		ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
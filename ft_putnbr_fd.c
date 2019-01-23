//
// Created by Dave Van bochove on 21/01/2019.
//

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, fd);
		ft_putnbr(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
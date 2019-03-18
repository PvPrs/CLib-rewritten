//
// Created by Dave Van bochove on 2019-03-18.
//
#include "../includes/libft.h"

void		ft_int_to_binary(int amount)
{
	int bits;

	bits = 1;
	if (amount < 0)
	{
		ft_putnbr(1);
		amount *= -1;
	}
	else
		ft_putnbr(0);
	while (bits < 32)
	{
		if (bits % 8 == 0)
		{
			ft_putstr(" ");
		}
		if (amount == 0)
		{
			ft_putnbr(0);
			bits++;
			continue;
		}
		ft_putnbr(amount % 2);
		amount = amount / 2;
		bits++;
	}
	ft_putstr("\n");
}

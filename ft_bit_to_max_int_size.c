#include "includes/libft.h"

/*
 ** @param max_bit_size Sets the loop_limit to max_bit_size
 ** @return calculation of the maximum integer possible in a specific bit.
 */
int ft_bit_to_max_int(int max_bit_size)
{
	int nbr;
	int bit_size;

	nbr = 1;
	bit_size = 1;
	while (bit_size <= max_bit_size)
	{
		ft_putstr("bit: ");
		ft_putnbr(bit_size);
		ft_putstr(" amount: ");
		ft_putnbr(nbr);
		ft_putstr("\n");
		nbr *= 2;
		bit_size++;
	}
	return 0;
}

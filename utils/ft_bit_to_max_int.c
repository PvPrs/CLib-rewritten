/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bit_to_max_int.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/18 03:46:52 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/03/18 03:47:07 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** @param max_bit_size Sets the loop_limit to max_bit_size
** @return calculation of the maximum integer possible in a specific bit.
*/

int		ft_bit_to_max_int(int max_bit_size)
{
	int nbr;
	int bit_size;

	nbr = 1;
	bit_size = 1;
	while (bit_size < max_bit_size)
	{
		nbr *= 2;
		bit_size++;
	}
	return (nbr);
}

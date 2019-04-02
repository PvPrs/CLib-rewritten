/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_int_to_binary.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/18 03:44:02 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/03/18 03:44:56 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_int_to_binary(int amount)
{
	char *res;
	int bits;
	int index;

	bits = 1;
	index = 1;
	res = malloc(35 * sizeof(char));
	if (amount < 0)
	{
		res[0] = '1';
		amount *= -1;
	}
	else
		res[0] = '0';
	while (bits < 32)
	{
		if (bits % 8 == 0)
			res[index] = ' ';
			index++;
		if (amount == 0)
		{
			res[index] = '0';
			index++;
			bits++;
			continue;
		}
		res[index] = ft_itoa(amount % 2)[0];
		index++;
		amount = amount / 2;
		bits++;
	}
	res[index] = '\0';
	return (res);
}

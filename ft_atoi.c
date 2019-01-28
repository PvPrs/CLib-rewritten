/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 16:04:04 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/15 16:04:06 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define NEGATIVE 1
#define POSITIVE 0

int		ft_atoi(const char *str)
{
	int index;
	int nbr;
	int flag_state;

	index = 0;
	nbr = 0;
	flag_state = POSITIVE;
	while (str[index] == ' ' || str[index] == '\n' ||
			str[index] == '\t' || str[index] == '\v' ||
			str[index] == '\r' || str[index] == '\f')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			flag_state = NEGATIVE;
		index++;
	}
	while (str[index] && str[index] >= '0' && str[index] <= '9')
	{
		if (str[index] >= '0' && str[index] <= '9')
			nbr = nbr * 10 + (str[index] - '0');
		index++;
	}
	return (flag_state == POSITIVE ? nbr : -nbr);
}

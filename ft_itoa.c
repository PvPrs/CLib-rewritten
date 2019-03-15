/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 14:13:55 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/24 14:13:58 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int		ft_getcount(int n)
{
	int count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				index;
	unsigned int	nbr;

	nbr = n;
	index = ft_getcount(nbr);
	str = (char *)malloc(ft_getcount(nbr) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		nbr = n * -1;
		*str = '-';
	}
	str[index--] = '\0';
	if (nbr == 0)
		str[index] = 0 + '0';
	while (nbr != 0)
	{
		str[index] = (nbr % 10) + '0';
		nbr = nbr / 10;
		index--;
	}
	return (str);
}

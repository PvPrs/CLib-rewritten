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

#include "libft.h"

static int		ft_getcount(int n)
{
	int count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char *str;

	str = (char *)malloc(ft_getcount(n) * sizeof(char));
	if (n >= 0)
	{
		if (n == 0)
			*--str = n + '0';
		while (n != 0)
		{
			*--str = (n % 10) + '0';
			n /= 10;
		}
	}
	else
	{
		n = n * -1;
		while (n != 0)
		{
			*--str = (n % 10) + '0';
			n /= 10;
		}
		*--str = '-';
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}

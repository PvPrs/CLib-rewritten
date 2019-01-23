//
// Created by Dave Van bochove on 21/01/2019.
//

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

char		*ft_itoa(int n)
{
	char *str;

	str = malloc(ft_getcount(n) * sizeof(char));
	if(n >= 0)
	{
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
	return (str);
}
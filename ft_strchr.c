/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 17:28:51 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/15 17:28:52 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	refactored_c;
	int		index;

	index = 0;
	refactored_c = c;
	while (s[index])
	{
		if (s[index + 1] == refactored_c)
			return ((char*)&s[index + 1]);
		if (s[index] == refactored_c)
			return ((char*)&s[index]);
		index++;
	}
	return (NULL);
}

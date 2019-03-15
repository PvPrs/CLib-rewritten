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

#include "includes/libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	refactored_c;
	int		index;

	refactored_c = c;
	index = (int)ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == refactored_c)
			return ((char*)&s[index]);
		index--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 17:25:31 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/15 17:26:09 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t index;
	size_t index_2;

	index = 0;
	index_2 = 0;
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (index_2 < len && haystack)
	{
		if (haystack[index_2] == needle[index])
			index++;
		else
			index = 0;
		if (needle[index] == '\0')
		{
			return (&haystack[index_2 - index + 1]);
		}
		index_2++;
	}
	return (NULL);
}

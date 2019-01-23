/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                          :+:    :+:          */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 20:26:15 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/13 15:08:09 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(char *haystack, char *needle)
{
	char *string;
	char *substring;

	substring = needle;
	if (*substring == 0)
		return (haystack);
	while (*haystack != 0)
	{
		if (*haystack != *substring)
		{
			haystack += 1;
			continue;
		}
		string = haystack;
		while (1)
		{
			if (*substring == 0)
				return (haystack);
			if (*string++ != *substring++)
				break ;
		}
		substring = needle;
		haystack += 1;
	}
	return (NULL);
}

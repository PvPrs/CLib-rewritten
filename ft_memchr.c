/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 19:31:00 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/17 19:31:04 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t				index;
	unsigned const char	*str;

	str = s;
	index = 0;
	while (str[index] != '\0' && index < n)
	{
		if (str[index] == c)
		{
			return ((char*)&s[index]);
		}
		index++;
	}
	return (NULL);
}

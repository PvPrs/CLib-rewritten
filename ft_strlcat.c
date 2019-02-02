/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlcat.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 20:26:15 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/13 15:08:09 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	len;

	index = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[index] && index < size)
		index++;
	len = index;
	while (src[index - len] && index < size - 1)
	{
		dst[index] = src[index - len];
		index++;
	}
	if (len < size)
		dst[index] = '\0';
	return (len + ft_strlen(src));
}

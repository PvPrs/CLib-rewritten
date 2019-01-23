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

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	len;
	int		index;

	index = 0;
	len = 0;
	src_len = ft_strlen(src);
	while (dst[index] && len < size)
	{
		index++;
		len++;
	}
	dst_len = len;
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, size - 1);
		dst[dst_len + size - 1] = '\0';
	}
	return (dst_len + src_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 19:31:19 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/17 19:31:23 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_2;
	const unsigned char	*src_2;
	size_t				index;

	dst_2 = dst;
	src_2 = src;
	index = 0;
	while (src_2[index] != '\0' && index < n)
	{
		if (src_2[index] == c)
		{
			return (&dst_2[index + 1]);
		}
		dst_2[index] = src_2[index];
		index++;
	}
	return (NULL);
}

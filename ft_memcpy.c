/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 15:35:26 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/13 17:18:23 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t index;

	index = 0;
	while (index < n)
	{
		if (((char*)dst)[index] != ((char*)src)[index])
		{
			((char*)dst)[index] = ((char*)src)[index];
		}
		index++;
	}
	return (dst);
}

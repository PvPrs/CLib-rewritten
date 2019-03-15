/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 16:49:58 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/18 16:50:01 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memalloc(size_t size)
{
	void *mem;

	mem = (void *)malloc(size);
	if (!mem)
	{
		return (NULL);
	}
	ft_bzero(mem, size);
	return (mem);
}

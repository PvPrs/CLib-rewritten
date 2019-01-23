/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:06:09 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/17 17:06:13 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*str;

	str = b;
	index = 0;
	while (index < len)
	{
		str[index] = c;
		index++;
	}
	return (b);
}

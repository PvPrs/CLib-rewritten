/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 19:31:32 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/17 19:31:40 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			index;

	str = s;
	index = 0;
	if (n == 0)
		return ;
	while (index < n)
	{
		str[index] = '\0';
		index++;
	}
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strcpy.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 18:21:23 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/10 18:42:51 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dest, const char *src)
{
	int index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}

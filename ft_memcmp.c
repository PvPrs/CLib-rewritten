/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 20:02:03 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/17 20:02:17 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;

	if (n != 0)
	{
		str1 = s1;
		str2 = s2;
		while (n-- != 0)
		{
			if (*str1++ != *str2++)
			{
				return (*--str1 - *--str2);
			}
		}
	}
	return (0);
}

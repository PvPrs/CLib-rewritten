/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 17:24:50 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/15 17:25:17 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;
	while (s1[index] && index < n)
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		printf("%zu", index);
		index++;
	}
	return (0);
}

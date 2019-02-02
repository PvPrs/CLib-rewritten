/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 19:44:14 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/12 19:54:51 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		index;
	size_t	index_s2;

	index_s2 = 0;
	index = 0;
	while (s1[index])
	{
		index++;
	}
	while (s2[index_s2] && index_s2 < n)
	{
		s1[index] = s2[index_s2];
		index_s2++;
		index++;
	}
	s1[index] = '\0';
	return (s1);
}

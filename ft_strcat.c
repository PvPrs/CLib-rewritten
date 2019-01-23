/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 18:50:04 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/12 19:43:45 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int index;
	int index_s2;

	index_s2 = 0;
	index = 0;
	while (s1[index])
	{
		index++;
	}
	while (s2[index_s2])
	{
		s1[index] = s2[index_s2];
		index_s2++;
		index++;
	}
	s1[index] = '\0';
	return (s1);
}

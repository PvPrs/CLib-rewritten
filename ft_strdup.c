/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strdup.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 17:49:28 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/12 18:44:55 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*str_dup;
	int		index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	str_dup = (char *)malloc(index * sizeof(char));
	str_dup = str;
	return (str_dup);
}

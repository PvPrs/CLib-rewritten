/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 17:43:37 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/10 18:43:21 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strlen(const char *s)
{
	size_t index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}

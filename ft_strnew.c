/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 16:49:32 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/18 16:49:35 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(size + 1);
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, size + 1);
	return (str);
}

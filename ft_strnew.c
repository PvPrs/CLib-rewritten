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

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *str;

	str = malloc(size);
	ft_bzero(str, size);
	str[strlen(str) + 1] = '\0';
	return (str);
}

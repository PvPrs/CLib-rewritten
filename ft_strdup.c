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

char		*ft_strdup(const char *s1)
{
	char	*str_dup;

	str_dup = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!str_dup)
		return (NULL);
	ft_strcpy(str_dup, s1);
	return (str_dup);
}

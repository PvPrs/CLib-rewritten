/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 18:59:44 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/18 19:00:10 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		index;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char) + 1);
	if (!str)
	{
		return (NULL);
	}
	str = ft_strcat((char*)s1, (char*)s2);
	index = ft_strlen(str);
	str[index] = '\0';
	return (str);
}

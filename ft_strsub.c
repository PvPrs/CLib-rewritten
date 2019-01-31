/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 16:53:10 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/18 16:53:13 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		index;
	int		index_2;

	index = start;
	index_2 = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc((sizeof(char) * len) + 1);
	if (!str)
		return (NULL);
	while (s[index] && len != 0)
	{
		str[index_2] = s[index];
		index++;
		index_2++;
		len--;
	}
	str[index_2] = '\0';
	return (str);
}

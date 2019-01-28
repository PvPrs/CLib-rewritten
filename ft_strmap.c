/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 15:13:17 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/18 15:13:22 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		index;

	index = 0;
	str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	while (str[index])
	{
		str[index] = f(s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}

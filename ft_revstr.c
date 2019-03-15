/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_revstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/03 14:00:52 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/02/03 14:00:53 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_revstr(char *str)
{
	char	*rev_str;
	int		index;
	int		index_rev;

	index = ft_strlen(str) - 1;
	index_rev = 0;
	rev_str = ft_strdup(str);
	while (rev_str[index_rev])
	{
		str[index] = rev_str[index_rev];
		index--;
		index_rev++;
	}
	free(rev_str);
	return (str);
}

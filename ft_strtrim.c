/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 14:12:12 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/24 14:12:14 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char	*ft_sendstr(char const *s, int i, int rev_i)
{
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i++;
			continue;
		}
		else
			while (rev_i > 0)
			{
				if (s[rev_i] == ' ' || s[rev_i] == '\n' || s[rev_i] == '\t')
				{
					rev_i--;
					continue;
				}
				else
					break ;
			}
		break ;
	}
	return (ft_strsub(s, i, (rev_i - i) + 1));
}

char		*ft_strtrim(char const *s)
{
	int i;
	int rev_i;

	if (!s)
		return (NULL);
	rev_i = (int)ft_strlen(s) - 1;
	i = 0;
	return (ft_sendstr(s, i, rev_i));
}

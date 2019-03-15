/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 14:13:00 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/24 14:13:02 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putstr(char const *s)
{
	int index;

	index = 0;
	if (s == NULL)
		return ;
	while (s[index])
	{
		write(1, &s[index], 1);
		index++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 12:29:01 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/24 12:29:21 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putstr_fd(char const *s, int fd)
{
	int index;

	index = 0;
	if (s == NULL)
		return ;
	while (s[index])
	{
		write(fd, &s[index], 1);
		index++;
	}
}

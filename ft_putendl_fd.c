/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 14:13:15 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/24 14:13:16 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putendl_fd(char const *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 16:49:09 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/18 16:49:13 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_strclr(char *s)
{
	if (!s)
		return ;
	ft_bzero(s, ft_strlen(s));
}

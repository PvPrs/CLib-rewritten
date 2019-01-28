/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 14:14:47 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/24 14:14:51 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	new = (t_list *)malloc(sizeof(t_list));
	new->next = *alst;
	new->content = (*alst)->content;
	new->content_size = (*alst)->content_size;
}

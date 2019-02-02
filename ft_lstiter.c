/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 14:15:05 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/24 14:15:06 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *temp;

	if (f == NULL || lst == NULL)
		return ;
	while (lst != NULL)
	{
		temp = lst->next;
		f(lst);
		lst = temp;
	}
}

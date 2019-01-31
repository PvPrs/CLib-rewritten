/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 14:15:12 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/24 14:15:13 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *temp;

	if (!f || !lst)
		return (NULL);

	new = f(lst);
	lst = lst->next;
	temp = new;
	new = new->next;

	while (lst->next != NULL)
	{
		new = f(lst);
		lst = lst->next;
		new = new->next;
	}
	return (temp);
}

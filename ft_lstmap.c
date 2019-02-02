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

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*res;
	t_list		*first;
	t_list		*refactored;

	if (lst == NULL || f == NULL)
		return (NULL);
	refactored = f(lst);
	res = ft_lstnew(refactored->content, refactored->content_size);
	if (res == NULL)
		return (NULL);
	lst = lst->next;
	first = res;
	while (lst)
	{
		refactored = f(lst);
		res->next = ft_lstnew(refactored->content, refactored->content_size);
		if (res->next == NULL)
			return (NULL);
		res = res->next;
		lst = lst->next;
	}
	return (first);
}

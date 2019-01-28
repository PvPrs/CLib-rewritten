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
	t_list *temp;

	while (lst->next != NULL)
	{
		temp = lst->next;
		lst = f(lst);
		if (!lst)
		{
			return (NULL);
		}
		lst = temp;
	}
	return (lst);
}

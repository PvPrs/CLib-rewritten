//
// Created by Dave Van bochove on 23/01/2019.
//

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;

	while (lst->next != NULL)
	{
		temp = lst->next;
		lst = f(lst);
		if(!lst)
		{
			return (NULL);
		}
		lst = temp;
	}
	return (lst);
}
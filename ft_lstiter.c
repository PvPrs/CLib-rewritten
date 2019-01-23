//
// Created by Dave Van bochove on 23/01/2019.
//

#include "libft.h"

void		ft_lstiter(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list *temp;

	while (lst->next != NULL)
	{
		temp = lst->next;
		(f)(lst);
		lst = temp;
	}
}
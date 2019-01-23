//
// Created by Dave Van bochove on 23/01/2019.
//

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	if(!*alst || !del)
		return;
	while((*alst)->next != NULL)
	{
		temp = (*alst)->next;
		del((*alst)->content_size, (*alst)->content_size);
		free(*alst);
		*alst = temp;
	}
}
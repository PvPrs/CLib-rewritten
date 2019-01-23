//
// Created by Dave Van bochove on 23/01/2019.
//

#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	new = malloc(sizeof(t_list));

	new->next = *alst;
	new->content = (*alst)->content;
	new->content_size = (*alst)->content_size;
}
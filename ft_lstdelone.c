//
// Created by Dave Van bochove on 23/01/2019.
//

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list *temp;

	del(temp->content, temp->content_size);
	free(*alst);
	*alst = NULL;
}
//
// Created by Dave Van bochove on 23/01/2019.
//

#include "libft.h"

t_list      *ft_lstnew(void const *content, size_t content_size)
{
    t_list *new_list;
    new_list = (t_list*)malloc(sizeof(t_list));
    if (!new_list)
    {
        return (NULL);
    }
    if(content == NULL)
    {
        new_list->content = NULL;
        new_list->content_size = 0;
    }
    else
    {
        new_list->content = (void*)content;
        new_list->content_size = content_size;
    }
    new_list->next = NULL;
    return (new_list);
}
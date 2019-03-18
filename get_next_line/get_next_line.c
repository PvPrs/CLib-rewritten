/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/04 18:58:06 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/02/04 18:58:07 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

static t_list	*get_file(int fd, t_list **file)
{
	t_list	*temp;

	temp = *file;
	while (temp)
	{
		if (temp->content_size == (size_t)fd)
			return (temp);
		temp = temp->next;
	}
	temp = ft_lstnew("", 1);
	temp->content_size = fd;
	ft_lstadd(file, temp);
	temp = *file;
	return (temp);
}

static int		ft_read(const int fd, char *buf, t_list *current)
{
	char	*temp;
	int		ret;

	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		temp = current->content;
		current->content = ft_strjoin(temp, buf);
		free(temp);
		if (ft_strchr(current->content, '\n'))
			break ;
	}
	return (ret);
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];
	static t_list	*file;
	t_list			*curr;
	char			*temp;

	if (line == NULL || fd < 0 || read(fd, buf, 0) < 0)
		return (-1);
	curr = get_file(fd, &file);
	ret = ft_read(fd, buf, curr);
	if (ret < BUFF_SIZE && !ft_strlen(curr->content))
		return (0);
	*line = ft_strchr(curr->content, '\n') == NULL ?
			ft_strchr(curr->content, '\0') : ft_strchr(curr->content, '\n');
	ret = *line - (char *)curr->content;
	*line = ft_strsub(curr->content, 0, ret);
	if (ret < (int)ft_strlen(curr->content))
	{
		temp = curr->content;
		curr->content = ft_strdup(curr->content + ret + 1);
		free(temp);
	}
	else
		ft_strclr(curr->content);
	return (1);
}
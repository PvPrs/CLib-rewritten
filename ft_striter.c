/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 16:48:55 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/18 16:48:59 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void		ft_striter(char *s, void (*f)(char *))
{
	int index;

	index = 0;
	if (!s || !f)
		return ;
	while (s[index])
	{
		f(&s[index]);
		index++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 16:50:13 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/18 16:50:14 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int index;

	index = 0;
	if (!s || !f)
		return ;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}

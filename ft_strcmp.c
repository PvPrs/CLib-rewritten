/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strcmp.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 17:27:16 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/15 17:27:20 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int index;

	index = 0;
	while (s1[index] && s1[index] == s2[index])
	{
		index++;
	}
	return ((const unsigned char)s1[index] - (const unsigned char)s2[index]);
}

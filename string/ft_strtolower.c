/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 19:50:02 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/15 19:50:08 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strtolower(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = (str[index] - 'A' + 'a');
		}
		index++;
	}
	return (str);
}

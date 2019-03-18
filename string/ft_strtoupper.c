/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 19:50:02 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/15 19:50:08 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strtoupper(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = (str[index] - 'a' + 'A');
		}
		index++;
	}
	return (str);
}

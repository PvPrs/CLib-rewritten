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

int		ft_toupper(int c)
{
	char refactored_c;

	refactored_c = c;
	if (c >= 'a' && c <= 'z')
	{
		refactored_c = (c - 'a' + 'A');
	}
	return (refactored_c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 16:21:35 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/17 16:21:43 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

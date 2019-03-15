/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/03 13:51:21 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/02/03 13:51:22 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nbr)
{
	int counter;

	counter = 0;
	while (counter < nbr)
	{
		if (counter * counter == nbr)
			return (counter);
		counter++;
	}
	return (0);
}

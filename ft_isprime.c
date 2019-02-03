/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprime.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/03 13:38:07 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/02/03 13:38:10 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if the entered value is a prime number.
 * @param nbr Number to be checked if it represents a @Prime number
 * @return 1 = TRUE, 0 = FALSE
 */
int		ft_isprime(int nbr)
{
	int counter;

	counter = 2;
	while (counter < nbr)
	{
		if (nbr % counter == 0 || nbr / counter == 0)
			return (0);
		counter++;
	}
	return (1);
}

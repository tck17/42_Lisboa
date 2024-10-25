/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:59:14 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/17 17:41:08 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

/*
 * Function: ft_putnbr
 * -------------------
 * This function prints an integer to the standard output.
 * It handles both positive and negative integers, including the special case of
 * the smallest possible integer (-2147483648).
 *
 * Parameters:
 *  - nb: The integer number to be printed.
 */

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_put_char('-');
		if (nb == -2147483648)
		{
			ft_put_char('2');
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_put_char(nb + '0');
}

/*
int	main(void)
{
	ft_putnbr(38);
	return (0);
}
*/

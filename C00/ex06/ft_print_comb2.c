/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:05:45 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/18 17:22:14 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Function: ft_put_char
 * ---------------------
 * This function prints a pair of two-digit numbers, 
 * formatted as "n1n2 n3n4".
 * It also ensures that after each combination 
 * (except the last one), a comma
 * and space are printed.
 *
 * Parameters:
 *  - n1: First digit of the first number
 *  - n2: Second digit of the first number
 *  - n3: First digit of the second number
 *  - n4: Second digit of the second number
 */

void	ft_put_char(char n1, char n2, char n3, char n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	if (!(n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9'))
	{
		write(1, ", ", 2);
	}
}

/*
 * Function: ft_print_comb2
 * ------------------------
 * This function generates all possible pairs of two-digit numbers. 
 * The first number (n1n2) is always smaller than the second number (n3n4). 
 * Both numbers range from '00' to '99'. The function ensures that no 
 * pair is repeated and calls 'ft_put_char'
 * to print each valid combination.
 */

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '9')
		{
			n3 = n1;
			n4 = n2 + 1;
			while (n3 <= '9')
			{
				while (n4 <= '9')
					ft_put_char(n1, n2, n3, n4++);
				n3++;
				n4 = '0';
			}
			n2++;
		}
		n1++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:51:18 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/17 15:01:43 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Function: ft_put_char
 * ---------------------
 * This function is responsible for printing a combination of three characters
 * passed as parameters (n1, n2, n3) and, if the combination isn't the last one
 * ('7', '8', '9'), it prints a comma and space afterward.
 *
 * Parameters:
 *  - n1: First digit of the combination (a char)
 *  - n2: Second digit of the combination (a char)
 *  - n3: Third digit of the combination (a char)
 */

void	ft_put_char(char n1, char n2, char n3)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
	if (n1 != '7' || n2 != '8' || n3 != '9')
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

/*
 * Function: ft_print_comb
 * -----------------------
 * This function generates all possible combinations of three different digits
 * (from '0' to '9'), ensuring that n1 < n2 < n3. The function then calls 
 * 'ft_put_char' to print each valid combination.
 *
 * The function starts with n1 = '0', n2 = '1', and n3 = '2', and iterates
 * until n1 reaches '7', since after '789' there are no more valid combinations.
 */

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_put_char(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

/*
int main (void) {
    ft_print_comb();
    return (0);
}
*/

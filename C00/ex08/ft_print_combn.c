/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:00:06 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/19 13:26:46 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function prototypes
void	ft_put_char(char c);
void	ft_recursive_comb(int n, int start, int depth, int *comb_digits);
void	ft_put_comb(int n, int *comb_digits);
void	ft_print_combn(int n);

// Function to output a single character
void	ft_put_char(char c)
{
	write(1, &c, 1);
}

/*
 * Function: ft_recursive_comb
 * ----------------------------
 * This function recursively generates all possible 
 * combinations of `n` digits.
 * It uses a depth-first approach to explore all combinations
 * starting from the
 * `start` digit and builds combinations by incrementing 
 * the `start` digit for 
 * each recursive call.
 *
 * Parameters:
 *  - n: The number of digits in each combination.
 *  - start: The starting digit for the current recursion 
 * level. Ensures that digits are in increasing order.
 *  - depth: The current depth (or position) in the 
 * combination being built.
 *  - comb_digits: An array that stores the current 
 * combination of digits being generated.
 *
 * The function terminates recursion when the depth equals 
 * `n`, meaning a complete 
 * combination is formed and should be printed. It then 
 * proceeds to fill the array 
 * and recursively generate further combinations.
 */
void	ft_recursive_comb(int n, int start, int depth, int *comb_digits)
{
	int	i;

	if (depth == n)
	{
		ft_put_comb(n, comb_digits);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		comb_digits[depth] = i;
		ft_recursive_comb(n, i + 1, depth + 1, comb_digits);
		i++;
	}
}

/*
 * Function: ft_put_comb
 * ----------------------
 * This function prints the current combination of digits 
 * stored in `comb_digits`.
 * It converts each digit to its character representation 
 * and outputs it. After 
 * printing all digits of the combination, it decides 
 * whether to add a comma and 
 * space based on whether the combination is the last one.
 *
 * Parameters:
 *  - n: The number of digits in the combination.
 *  - comb_digits: An array containing the current 
 * combination of digits to be printed.
 *
 * The function adds a comma and space after the 
 * combination if it is not the last combination in the 
 * sequence.
 */
void	ft_put_comb(int n, int *comb_digits)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_put_char(comb_digits[i] + '0');
		i++;
	}
	if (comb_digits[0] < (10 - n))
	{
		ft_put_char(',');
		ft_put_char(' ');
	}
}

/*
 * Function: ft_print_combn
 * --------------------------
 * This function initializes the process of generating 
 * and printing combinations
 * of `n` digits. It prepares an array to store the digits 
 * of the combination and
 * ensures that it is within valid bounds (1 to 9). It 
 * then starts the recursive 
 * combination generation by calling `ft_recursive_comb`.
 *
 * Parameters:
 *  - n: The number of digits in each combination to be 
 * generated.
 *
 * The function validates the input `n` to be between 1 
 * and 9. It initializes the 
 * `comb_digits` array and starts the combination 
 * generation process.
 */
void	ft_print_combn(int n)
{
	int	comb_digits[10];
	int	i;

	if (n < 1 || n > 9)
		return ;
	i = 0;
	while (i < 10)
	{
		comb_digits[i] = 0;
		i++;
	}
	ft_recursive_comb(n, 0, 0, comb_digits);
}

// Main function to execute the program
/*
int	main(void)
{
	ft_print_combn(2);
	ft_put_char('\n');
	ft_print_combn(5);
	return (0);
}
*/

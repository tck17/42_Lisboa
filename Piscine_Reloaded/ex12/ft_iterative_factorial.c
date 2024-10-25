/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:43:04 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 14:44:08 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	i = 1;
	fact = i;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

/*

#include <stdio.h>

// Function prototype
int ft_iterative_factorial(int nb);

int main(void) {
    // Test cases
    int test_values[] = {0, 1, 2, 3, 4, 5, 6, 7, 10, -1};
    size_t i;
    int result;

    // Print the header
    printf("Testing ft_iterative_factorial:\n");

    // Loop through test values and print results
    for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++) {
        result = ft_iterative_factorial(test_values[i]);
        if (result == 0 && test_values[i] > 0) {
            printf("Factorial of %d is too large or undefined.\n", 
			test_values[i]);
        } else {
            printf("Factorial of %d is %d\n", test_values[i], result);
        }
    }

    return 0;
}

*/

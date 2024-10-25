/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:43:31 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 14:45:37 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;
	int	i;

	i = 1;
	fact = i;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*

#include <stdio.h>

// Function prototype
int ft_recursive_factorial(int nb);

int main(void) {
    // Test cases
    int test_values[] = {0, 1, 2, 3, 4, 5, 6, 7, 10, -1};
    size_t i;
    int result;

    // Print the header
    printf("Testing ft_iterative_factorial:\n");

    // Loop through test values and print results
    for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++) {
        result = ft_recursive_factorial(test_values[i]);
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
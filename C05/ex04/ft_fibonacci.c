/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:45:05 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/02 14:20:52 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}

/*

#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
    // Test cases
    int test_values[] = {-5, 0, 1, 2, 3, 4, 5, 10, 15, 20};
    size_t i;
    int result;

    // Print the header
    printf("Testing ft_fibonacci:\n");

    // Loop through test values and print results
    for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++) {
        result = ft_fibonacci(test_values[i]);
        if (result == -1)
            printf("Fibonacci of %d is undefined (index is negative)\n", 
			test_values[i]);
        else
            printf("Fibonacci of %d is %d\n", test_values[i], result);
    }

    return 0;
}

*/
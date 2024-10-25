/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:45:43 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 14:47:15 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 0;
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		else
			result++;
	}
	return (0);
}

/*

#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
    // Test cases
    int test_values[] = {-4, 0, 1, 4, 9, 15, 16, 25, 36, 49, 
	50, 100, 2147395600};
    size_t i;
    int result;

    // Print the header
    printf("Testing ft_sqrt:\n");

    // Loop through test values and print results
    for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++) {
        result = ft_sqrt(test_values[i]);
        if (test_values[i] == 0)
            printf("Square root of 0 is 0\n");
        else if (result == 0)
            printf("Square root of %d is not an integer or undefined.\n",
			 test_values[i]);
        else
            printf("Square root of %d is %d\n", test_values[i], result);
    }

    return 0;
}

*/
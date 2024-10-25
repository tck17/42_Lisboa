/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:49:13 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/02 14:54:26 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	else
	{
		i = 2;
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

/*

#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
    // Test cases
    int test_values[] = {-1, 0, 1, 2, 3, 4, 5, 9, 11, 16, 
	17, 19, 23, 25, 29, 97};
    size_t i;
    int result;

    // Print the header
    printf("Testing ft_is_prime:\n");

    // Loop through test values and print results
    for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++) {
        result = ft_is_prime(test_values[i]);
        if (result == 1)
            printf("%d is prime.\n", test_values[i]);
        else
            printf("%d is not prime.\n", test_values[i]);
    }

    return 0;
}

*/
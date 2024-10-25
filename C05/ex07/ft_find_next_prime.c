/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:49:43 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/03 11:27:55 by anmiguel         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*

#include <stdio.h>

int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main(void)
{
    // Test cases for ft_find_next_prime
    int test_values[] = {0, 1, 2, 3, 4, 5, 10, 15, 20, 23, 29, 30, 50, 97, 100};
    size_t i;
    int result;

    // Print the header
    printf("Testing ft_find_next_prime:\n");

    // Loop through test values and print results
    for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++) {
        result = ft_find_next_prime(test_values[i]);
        printf("The next prime after %d is %d\n", test_values[i], result);
    }

    return 0;
}

*/

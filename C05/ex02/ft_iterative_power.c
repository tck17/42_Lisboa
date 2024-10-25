/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:43:59 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/02 14:04:49 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 0;
	result = 1;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

/*

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
    // Test cases
    int base[] = {2, 3, 5, -2, -3, 10, 0, 1};
    int powers[] = {0, 1, 2, 3, 3, 2, 10, 5};
    size_t i;
    int result;

    // Print the header
    printf("Testing ft_iterative_power:\n");

    // Loop through test values and print results
    for (i = 0; i < sizeof(base) / sizeof(base[0]); i++) {
        result = ft_iterative_power(base[i], powers[i]);
        printf("%d to the power of %d is %d\n", base[i], powers[i], result);
    }

    return 0;
}

*/
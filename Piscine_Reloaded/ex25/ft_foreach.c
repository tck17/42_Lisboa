/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:16:18 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/25 13:25:23 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*

#include <stdio.h>

// Function to print an integer
void print_int(int n) {
    printf("%d\n", n);
}

int main() {
    // Example array of integers
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);

    // Call ft_foreach with the array, its length, and the print function
    ft_foreach(array, length, print_int);

    return 0;
}

*/

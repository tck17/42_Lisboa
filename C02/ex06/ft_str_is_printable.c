/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:05:09 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/28 11:35:38 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*

#include <stdio.h>

int main(void)
{
    char *test1 = "Hello, World!";
    char *test2 = "This is a printable string!";
    char *test3 = "Contains\tsome\nnon-printable";
    char *test4 = "";
    char *test5 = "Printable 123";

    printf("Test 1: %d\n", ft_str_is_printable(test1)); // Should return 1
    printf("Test 2: %d\n", ft_str_is_printable(test2)); // Should return 1
    printf("Test 3: %d\n", ft_str_is_printable(test3)); // Should return 0 
// (contains tab and newline)
    printf("Test 4: %d\n", ft_str_is_printable(test4)); // Should return 1 
// (empty string)
    printf("Test 5: %d\n", ft_str_is_printable(test5)); // Should return 1

    return 0;
}

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:03:25 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/21 16:03:28 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 47 && str[i] <= 57))
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
    // Test case 1: String with only numeric characters
    char test1[] = "1234567890";
    printf("Test 1 - Only numeric: %s\n", test1);
    printf("Result: %d\n\n", ft_str_is_numeric(test1)); // Expected: 1

    // Test case 2: String with letters (non-numeric characters)
    char test2[] = "1234a567";
    printf("Test 2 - Numeric with a letter: %s\n", test2);
    printf("Result: %d\n\n", ft_str_is_numeric(test2)); // Expected: 0

    // Test case 3: String with special characters
    char test3[] = "1234-567";
    printf("Test 3 - Numeric with special character: %s\n", test3);
    printf("Result: %d\n\n", ft_str_is_numeric(test3)); // Expected: 0

    // Test case 4: Empty string (considered valid)
    char test4[] = "";
    printf("Test 4 - Empty string: \"%s\"\n", test4);
    printf("Result: %d\n\n", ft_str_is_numeric(test4)); // Expected: 1

    // Test case 5: String with leading spaces (invalid)
    char test5[] = " 12345";
    printf("Test 5 - String with leading spaces: \"%s\"\n", test5);
    printf("Result: %d\n\n", ft_str_is_numeric(test5)); // Expected: 0

    // Test case 6: String with mixed numbers and characters
    char test6[] = "123abc456";
    printf("Test 6 - Mixed numbers and letters: %s\n", test6);
    printf("Result: %d\n\n", ft_str_is_numeric(test6)); // Expected: 0

    return 0;
}

*/

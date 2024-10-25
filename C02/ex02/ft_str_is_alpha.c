/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:02:58 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/27 15:34:08 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122)))
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
    // Test case 1: String with only alphabetic characters
    char test1[] = "HelloWorld";
    printf("Test 1 - Only alphabetic: %s\n", test1);
    printf("Result: %d\n\n", ft_str_is_alpha(test1)); // Expected: 1

    // Test case 2: String with numbers (non-alphabetic characters)
    char test2[] = "Hello123";
    printf("Test 2 - Alphabetic with numbers: %s\n", test2);
    printf("Result: %d\n\n", ft_str_is_alpha(test2)); // Expected: 0

    // Test case 3: String with special characters
    char test3[] = "Hello!";
    printf("Test 3 - Alphabetic with special characters: %s\n", test3);
    printf("Result: %d\n\n", ft_str_is_alpha(test3)); // Expected: 0

    // Test case 4: Empty string (considered valid, alphabetic)
    char test4[] = "";
    printf("Test 4 - Empty string: \"%s\"\n", test4);
    printf("Result: %d\n\n", ft_str_is_alpha(test4)); // Expected: 1

    // Test case 5: String with only lowercase letters
    char test5[] = "abcdef";
    printf("Test 5 - Only lowercase alphabetic: %s\n", test5);
    printf("Result: %d\n\n", ft_str_is_alpha(test5)); // Expected: 1

    // Test case 6: String with only uppercase letters
    char test6[] = "ABCDEF";
    printf("Test 6 - Only uppercase alphabetic: %s\n", test6);
    printf("Result: %d\n\n", ft_str_is_alpha(test6)); // Expected: 1

    return 0;
}

*/

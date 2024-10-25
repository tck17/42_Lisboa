/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:07:23 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/29 17:49:28 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*

#include <stdio.h>
#include <string.h>

// Function prototypes
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char *str1 = "Hello";
    char *str2 = "Hello";
    char *str3 = "Hell";
    char *str4 = "HeLlo";
    char *str5 = "World";

    // Test case 1: Same strings, compare first n characters
    printf("Comparing '%s' and '%s' with n = 5:\n", str1, str2);
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 5));  // Expected: 0
    printf("strncmp:   %d\n", strncmp(str1, str2, 5));      // Expected: 0
    printf("\n");

    // Test case 2: Compare only first 4 characters (same)
    printf("Comparing '%s' and '%s' with n = 4:\n", str1, str3);
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str3, 4));  // Expected: 0
    printf("strncmp:   %d\n", strncmp(str1, str3, 4));      // Expected: 0
    printf("\n");

    // Test case 3: Compare only first 3 characters (different)
    printf("Comparing '%s' and '%s' with n = 3:\n", str1, str4);
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str4, 3));  // Expected: 0
    printf("strncmp:   %d\n", strncmp(str1, str4, 3));      // Expected: 0
    printf("\n");

    // Test case 4: Compare first 5 characters (different case)
    printf("Comparing '%s' and '%s' with n = 5:\n", str1, str4);
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str4, 5));  
// Expected: Positive value
    printf("strncmp:   %d\n", strncmp(str1, str4, 5));      
// Expected: Positive value
    printf("\n");

    // Test case 5: Compare different strings with n = 3
    printf("Comparing '%s' and '%s' with n = 3:\n", str1, str5);
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str5, 3));  
// Expected: Negative value
    printf("strncmp:   %d\n", strncmp(str1, str5, 3));      
// Expected: Negative value
    printf("\n");

    // Test case 6: n is 0, no comparison should be made
    printf("Comparing '%s' and '%s' with n = 0:\n", str1, str2);
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 0));  // Expected: 0
    printf("strncmp:   %d\n", strncmp(str1, str2, 0));      // Expected: 0
    printf("\n");

    return 0;
}

*/

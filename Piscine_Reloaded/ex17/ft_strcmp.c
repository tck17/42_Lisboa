/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:03:43 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 14:59:21 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}

/*

#include <stdio.h>
#include <string.h>

// Function prototypes
int ft_strcmp(char *s1, char *s2);

int main()
{
    char *str1 = "Hello";
    char *str2 = "Hello";
    char *str3 = "Hell";
    char *str4 = "World";
    char *str5 = "";  // Empty string for additional tests
    char *str6 = "HelloWorld"; // Longer string for additional tests

    // Test case 1: Same strings
    printf("Comparing '%s' and '%s':\n", str1, str2);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));   // Expected: 0
    printf("strcmp:   %d\n", strcmp(str1, str2));       // Expected: 0
    printf("\n");

    // Test case 2: First string longer
    printf("Comparing '%s' and '%s':\n", str1, str3);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str3));   
// Expected: Positive value
    printf("strcmp:   %d\n", strcmp(str1, str3));       
// Expected: Positive value
    printf("\n");

    // Test case 3: Different strings
    printf("Comparing '%s' and '%s':\n", str1, str4);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str4));   
// Expected: Negative value
    printf("strcmp:   %d\n", strcmp(str1, str4));       
// Expected: Negative value
    printf("\n");

    // Test case 4: Empty string comparison
    printf("Comparing '%s' and '%s':\n", str5, str5);
    printf("ft_strcmp: %d\n", ft_strcmp(str5, str5));   
// Expected: 0
    printf("strcmp:   %d\n", strcmp(str5, str5));       
// Expected: 0
    printf("\n");

    // Test case 5: First string empty, second string non-empty
    printf("Comparing '%s' and '%s':\n", str5, str1);
    printf("ft_strcmp: %d\n", ft_strcmp(str5, str1));   
// Expected: Negative value
    printf("strcmp:   %d\n", strcmp(str5, str1));       
// Expected: Negative value
    printf("\n");

    // Test case 6: First string non-empty, second string empty
    printf("Comparing '%s' and '%s':\n", str1, str5);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str5));   
// Expected: Positive value
    printf("strcmp:   %d\n", strcmp(str1, str5));       
// Expected: Positive value
    printf("\n");

    // Test case 7: First string is a substring of second string
    printf("Comparing '%s' and '%s':\n", str3, str6);
    printf("ft_strcmp: %d\n", ft_strcmp(str3, str6));   
// Expected: Negative value
    printf("strcmp:   %d\n", strcmp(str3, str6));       
// Expected: Negative value
    printf("\n");

    return 0;
}

*/

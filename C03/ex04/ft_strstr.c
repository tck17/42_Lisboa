/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:42:28 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/29 18:06:15 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		s = str;
		f = to_find;
		while (*f != '\0' && *s == *f)
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return (str);
		str++;
	}
	return (0);
}

/*

#include <stdio.h>
#include <string.h>  // For the standard strstr function

// Declaration of your function
char *ft_strstr(char *str, char *to_find);

int main() {
    // Original string and search substrings
    char to_find1[] = "World";
    char to_find2[] = "Hello";
    char to_find3[] = "NotFound";
    char to_find4[] = "";
    char to_find5[] = "!";

    // Test 1: Find "World" in "Hello, World!"
    char str1[] = "Hello, World!";  // Copy of the original string for 
// ft_strstr
    char str2[] = "Hello, World!";  // Copy of the original string for strstr
    char *result_ft = ft_strstr(str1, to_find1);
    char *result_std = strstr(str2, to_find1);
    if (result_ft)
        printf("Test 1 - ft_strstr: Found 'World' at address %p\n", 
(void *)result_ft);
    else
        printf("Test 1 - ft_strstr: NULL\n");

    if (result_std)
        printf("Test 1 - strstr: Found 'World' at address %p\n", 
(void *)result_std);
    else
        printf("Test 1 - strstr: NULL\n");

    // Test 2: Find "Hello" in "Hello, World!"
    char str3[] = "Hello, World!";  // Copy of the original string for 
// ft_strstr
    char str4[] = "Hello, World!";  // Copy of the original string for 
// strstr
    result_ft = ft_strstr(str3, to_find2);
    result_std = strstr(str4, to_find2);
    if (result_ft)
        printf("Test 2 - ft_strstr: Found 'Hello' at address %p\n", 
(void *)result_ft);
    else
        printf("Test 2 - ft_strstr: NULL\n");

    if (result_std)
        printf("Test 2 - strstr: Found 'Hello' at address %p\n", 
(void *)result_std);
    else
        printf("Test 2 - strstr: NULL\n");

    // Test 3: Try to find a string that doesn't exist in "Hello, World!"
    char str5[] = "Hello, World!";  // Copy of the original string for 
// ft_strstr
    char str6[] = "Hello, World!";  // Copy of the original string for strstr
    result_ft = ft_strstr(str5, to_find3);
    result_std = strstr(str6, to_find3);
    if (result_ft)
        printf("Test 3 - ft_strstr: Found 'NotFound' at address %p\n", 
(void *)result_ft);
    else
        printf("Test 3 - ft_strstr: NULL\n");

    if (result_std)
        printf("Test 3 - strstr: Found 'NotFound' at address %p\n", 
(void *)result_std);
    else
        printf("Test 3 - strstr: NULL\n");

    // Test 4: Search for an empty string in "Hello, World!"
    char str7[] = "Hello, World!";  // Copy of the original string for 
// ft_strstr
    char str8[] = "Hello, World!";  // Copy of the original string for strstr
    result_ft = ft_strstr(str7, to_find4);
    result_std = strstr(str8, to_find4);
    if (result_ft)
        printf("Test 4 - ft_strstr: Found empty string at address %p\n",
(void *)result_ft);
    else
        printf("Test 4 - ft_strstr: NULL\n");

    if (result_std)
        printf("Test 4 - strstr: Found empty string at address %p\n", 
(void *)result_std);
    else
        printf("Test 4 - strstr: NULL\n");

    // Test 5: Find "!" in "Hello, World!"
    char str9[] = "Hello, World!";  // Copy of the original string for ft_strstr
    char str10[] = "Hello, World!";  // Copy of the original string for strstr
    result_ft = ft_strstr(str9, to_find5);
    result_std = strstr(str10, to_find5);
    if (result_ft)
        printf("Test 5 - ft_strstr: Found '!' at address %p\n",
 (void *)result_ft);
    else
        printf("Test 5 - ft_strstr: NULL\n");

    if (result_std)
        printf("Test 5 - strstr: Found '!' at address %p\n", 
(void *)result_std);
    else
        printf("Test 5 - strstr: NULL\n");

    return 0;
}

*/

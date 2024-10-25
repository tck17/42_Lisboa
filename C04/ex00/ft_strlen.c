/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:14:19 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/31 13:29:31 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>  // For standard strlen

int ft_strlen(char *str);

int main() {
    // Test strings
    char str1[] = "Hello, World!";
    char str2[] = "";
    char str3[] = "This is a longer test string.";
    char str4[] = "1234567890";
    char str5[] = "C programming is fun!";

    // Test Case 1
    printf("Test Case 1:\n");
    printf("String: \"%s\"\n", str1);
    printf("ft_strlen: %d\n", ft_strlen(str1));
    printf("strlen: %lu\n\n", strlen(str1));

    // Test Case 2
    printf("Test Case 2:\n");
    printf("String: \"%s\"\n", str2);
    printf("ft_strlen: %d\n", ft_strlen(str2));
    printf("strlen: %lu\n\n", strlen(str2));

    // Test Case 3
    printf("Test Case 3:\n");
    printf("String: \"%s\"\n", str3);
    printf("ft_strlen: %d\n", ft_strlen(str3));
    printf("strlen: %lu\n\n", strlen(str3));

    // Test Case 4
    printf("Test Case 4:\n");
    printf("String: \"%s\"\n", str4);
    printf("ft_strlen: %d\n", ft_strlen(str4));
    printf("strlen: %lu\n\n", strlen(str4));

    // Test Case 5
    printf("Test Case 5:\n");
    printf("String: \"%s\"\n", str5);
    printf("ft_strlen: %d\n", ft_strlen(str5));
    printf("strlen: %lu\n", strlen(str5));

    return 0;
}

*/

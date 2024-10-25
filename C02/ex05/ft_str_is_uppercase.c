/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:04:39 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/21 16:04:41 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    char *test1 = "HELLO";
    char *test2 = "WORLD";
    char *test3 = "Hello";
    char *test4 = "123ABC";
    char *test5 = "";
    char *test6 = "UPPERCASE";

    printf("Test 1: %s -> %d\n", test1, ft_str_is_uppercase(test1));  
// Expected output: 1
    printf("Test 2: %s -> %d\n", test2, ft_str_is_uppercase(test2));  
// Expected output: 1
    printf("Test 3: %s -> %d\n", test3, ft_str_is_uppercase(test3));  
// Expected output: 0
    printf("Test 4: %s -> %d\n", test4, ft_str_is_uppercase(test4));  
// Expected output: 0
    printf("Test 5: %s -> %d\n", test5, ft_str_is_uppercase(test5));  
// Expected output: 1 (empty string)
    printf("Test 6: %s -> %d\n", test6, ft_str_is_uppercase(test6));  
// Expected output: 1

    return 0;
}

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:14:52 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 14:54:23 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*

int main()
{
    // Test Case 1: Simple string
    char str1[] = "Hello, World!";
    ft_putstr(str1);
    write(1, "\n", 1); // Newline for better readability

    // Test Case 2: Empty string
    char str2[] = "";
    ft_putstr(str2);
    write(1, "\n", 1); // Newline for better readability

    // Test Case 3: Another test string
    char str3[] = "This is a test string.";
    ft_putstr(str3);
    write(1, "\n", 1); // Newline for better readability

    // Test Case 4: String with special characters
    char str4[] = "Special characters: @#$%^&*()!";
    ft_putstr(str4);
    write(1, "\n", 1); // Newline for better readability

    return 0;
}

*/
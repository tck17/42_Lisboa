/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:14:52 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/01 16:13:32 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writestr(char *str, int i)
{
	write(1, str, i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ft_writestr(str, i);
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

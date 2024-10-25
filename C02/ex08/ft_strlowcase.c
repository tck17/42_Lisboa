/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:06:06 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/21 16:06:08 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*

#include <stdio.h>

int main(void)
{
    char test1[] = "HELLO WORLD!";
    char test2[] = "lowercase";
    char test3[] = "123 MIXED Cases 456";
    char test4[] = "";
    char test5[] = "Already LOWERCASE!";

    printf("Original: %s\n", test1);
    printf("Lowercase: %s\n\n", ft_strlowcase(test1));

    printf("Original: %s\n", test2);
    printf("Lowercase: %s\n\n", ft_strlowcase(test2));

    printf("Original: %s\n", test3);
    printf("Lowercase: %s\n\n", ft_strlowcase(test3));

    printf("Original: \"%s\"\n", test4);
    printf("Lowercase: \"%s\"\n\n", ft_strlowcase(test4));

    printf("Original: %s\n", test5);
    printf("Lowercase: %s\n", ft_strlowcase(test5));

    return 0;
}

*/

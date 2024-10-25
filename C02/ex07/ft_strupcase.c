/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:05:39 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/21 16:05:41 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*

#include <stdio.h>

int main(void)
{
    char test1[] = "hello world!";
    char test2[] = "UPPERCASE";
    char test3[] = "123 mixed Cases 456";
    char test4[] = "";
    char test5[] = "already UPPERCASE!";

    printf("Original: %s\n", test1);
    printf("Uppercase: %s\n\n", ft_strupcase(test1));

    printf("Original: %s\n", test2);
    printf("Uppercase: %s\n\n", ft_strupcase(test2));

    printf("Original: %s\n", test3);
    printf("Uppercase: %s\n\n", ft_strupcase(test3));

    printf("Original: \"%s\"\n", test4);
    printf("Uppercase: \"%s\"\n\n", ft_strupcase(test4));

    printf("Original: %s\n", test5);
    printf("Uppercase: %s\n", ft_strupcase(test5));

    return 0;
}

*/

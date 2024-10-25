/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:06:31 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/28 17:40:53 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*

#include <stdio.h>

int main(void)
{
    char test1[] = "hello, world! this is a test.";
    char test2[] = "42forty-two 101 dalmations!";
    char test3[] = "123abc def-GHI jkl.MNO pqr@stu.vwx yz!";
    char test4[] = "ALL CAPS HERE";
    char test5[] = "aMiGuel@42_Fr. who_are_you";

    printf("Original: %s\n", test1);
    printf("Capitalized: %s\n\n", ft_strcapitalize(test1));

    printf("Original: %s\n", test2);
    printf("Capitalized: %s\n\n", ft_strcapitalize(test2));

    printf("Original: %s\n", test3);
    printf("Capitalized: %s\n\n", ft_strcapitalize(test3));

    printf("Original: %s\n", test4);
    printf("Capitalized: %s\n\n", ft_strcapitalize(test4));

    printf("Original: %s\n", test5);
    printf("Capitalized: %s\n\n", ft_strcapitalize(test5));

    return 0;
}

*/

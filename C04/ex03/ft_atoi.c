/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:16:03 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/02 12:39:27 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/*

#include <stdlib.h>
#include <stdio.h>

int main() {
    char str[] = "-12345";
    char str1[] = "\t---+--+1234ab567";
    int num = ft_atoi(str);
    int num1 = ft_atoi(str1);
    int std_num = atoi(str);
    int std_num1 = atoi(str1);
    printf("ft_atoi(\"%s\") = %d\n", str, num);
    printf("atoi(\"%s\") = %d\n", str, std_num);
    printf("ft_atoi(\"%s\") = %d\n", str1, num1);
    printf("atoi(\"%s\") = %d\n", str1, std_num1);
    return 0;
}

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:17:03 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/01 15:59:18 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_length(const char *base)
{
	int	length;

	length = 0;
	while (base[length] != '\0')
		length++;
	return (length);
}

int	is_valid_base(const char *base)
{
	int	length;
	int	i;
	int	j;

	length = base_length(base);
	if (length < 2)
		return (0);
	i = 0;
	while (i < length)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32
			|| base[i] == 127)
			return (0);
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	parse_sign_and_skip_spaces(char **str)
{
	int	sign;

	sign = 1;
	while (**str == ' ')
		(*str)++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = sign * -1;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	base_len;
	int	index;

	if (!is_valid_base(base))
		return (0);
	res = 0;
	sign = parse_sign_and_skip_spaces(&str);
	base_len = base_length(base);
	while (*str)
	{
		index = get_index_in_base(*str, base);
		if (index == -1)
			break ;
		res = res * base_len + index;
		str++;
	}
	return (res * sign);
}

/*

// Assume the ft_atoi_base and is_valid_base functions are defined elsewhere

#include <stdio.h>

int main() {
    // Test cases
   printf("Testing valid bases:\n");
    printf("Result: %d\n", ft_atoi_base("101010", "01"));               
// Binary -> 42
    printf("Result: %d\n", ft_atoi_base("255", "0123456789"));           
// Decimal -> 255
    printf("Result: %d\n", ft_atoi_base("1E240", "0123456789ABCDEF"));   
// Hexadecimal -> 123456
    printf("Result: %d\n", ft_atoi_base("---ponf", "poneyvif"));          
// Custom octal -> 123456
    printf("Result: %d\n", ft_atoi_base("   +123", "0123456789"));       
// Decimal with spaces -> 123
    printf("Result: %d\n", ft_atoi_base("-123", "0123456789"));          
// Negative decimal -> -123

    // Test cases with invalid bases
    printf("\nTesting invalid bases:\n");
    printf("Result: %d\n", ft_atoi_base("255", ""));                     
// Invalid base -> 0
    printf("Result: %d\n", ft_atoi_base("255", "0123456789ABCDEF0"));    
// Invalid base (duplicate '0') -> 0
    printf("Result: %d\n", ft_atoi_base("255", "01234 6789"));           
// Invalid base (whitespace) -> 0
    printf("Result: %d\n", ft_atoi_base("255", "+0123456789"));          
// Invalid base (contains '+') -> 0
    printf("Result: %d\n", ft_atoi_base("255", "-0123456789"));          
// Invalid base (contains '-') -> 0
    

    return 0;
}

*/
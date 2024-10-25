/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:44:15 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/05 14:13:10 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *str);
char	*ft_putnbr_base(long int nbr, char *base, int is_neg);
int		is_valid_base(const char *base);

char	*check_sign(char *str, int *is_neg)
{
	*is_neg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*is_neg *= -1;
		str++;
	}
	return (str);
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

int	ft_atoi_base(char *str, char *base, int *is_neg)
{
	int	base_len;
	int	index;
	int	result;

	base_len = ft_strlen(base);
	result = 0;
	if (!is_valid_base(base))
		return (0);
	str = check_sign(str, is_neg);
	index = get_index_in_base(*str, base);
	while (*str && index != -1)
	{
		result = result * base_len + index;
		str++;
		index = get_index_in_base(*str, base);
	}
	return (result * (*is_neg));
}

char	*ft_atoi(char *str, char *base, int *is_neg, int *size)
{
	char	*start;
	int		i;
	int		base_len;
	int		index;

	*is_neg = 1;
	str = check_sign(str, is_neg);
	start = str;
	base_len = ft_strlen(base);
	i = 0;
	while (*str)
	{
		index = get_index_in_base(*str, base);
		if (index == -1)
			break ;
		i++;
		str++;
	}
	*size = i;
	return (start);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	nb;
	int			is_neg;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from, &is_neg);
	return (ft_putnbr_base(nb, base_to, is_neg));
}

/*

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
    char *result;

    // Test case 1: Convert "1010" from binary (base 2) to decimal (base 10)
    result = ft_convert_base("1010", "01", "0123456789");
    if (result)
        printf("Binary 1010 to Decimal: %s\n", result);
    free(result);

    // Test case 2: Convert "-255" from decimal (base 10) to 
	// hexadecimal (base 16)
    result = ft_convert_base("-255", "0123456789", "0123456789ABCDEF");
    if (result)
        printf("Decimal -255 to Hexadecimal: %s\n", result);
    free(result);

    // Test case 3: Convert "7B" from hexadecimal (base 16) to binary (base 2)
    result = ft_convert_base("7B", "0123456789ABCDEF", "01");
    if (result)
        printf("Hexadecimal 7B to Binary: %s\n", result);
    free(result);

    // Test case 4: Convert "101" from binary (base 2) to octal (base 8)
    result = ft_convert_base("101", "01", "01234567");
    if (result)
        printf("Binary 101 to Octal: %s\n", result);
    free(result);

    // Test case 5: Convert "42" from decimal (base 10) to binary (base 2)
    result = ft_convert_base("42", "0123456789", "01");
    if (result)
        printf("Decimal 42 to Binary: %s\n", result);
    free(result);

    return 0;
}

*/
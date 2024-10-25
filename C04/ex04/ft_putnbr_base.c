/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:16:30 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/02 12:41:42 by anmiguel         ###   ########.fr       */
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

int	size_of_num(long int nbr, int base_len)
{
	int	size;

	size = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		nbr /= base_len;
		size++;
	}
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			result[34];
	long int		big_n;
	int				base_len;
	int				size;
	int				i;

	if (!is_valid_base(base))
		return ;
	base_len = base_length(base);
	big_n = nbr;
	size = size_of_num(big_n, base_len);
	i = size;
	if (big_n < 0)
	{
		write(1, "-", 1);
		big_n = -big_n;
	}
	result[i--] = '\0';
	while (i >= 0)
	{
		result[i--] = base[big_n % base_len];
		big_n /= base_len;
	}
	write(1, result, size);
}

/*

int main() {
	ft_putnbr_base(123456, "0123456789");  // Decimal
    write(1, "\n", 1);
	ft_putnbr_base(-123456, "0123456789"); // Negative Decimal
    write(1, "\n", 1);
	ft_putnbr_base(-(1 << 31), "01");          // Binary
    write(1, "\n", 1);
	ft_putnbr_base(123456, "0123456789ABCDEF"); // Hexadecimal
    write(1, "\n", 1);
	ft_putnbr_base(123456, "poneyvif");    // Custom base (8 characters)
    write(1, "\n", 1);
    
    // Test cases with invalid bases
	ft_putnbr_base(123456, "+123");  // Invalid base due to '+'
    write(1, "\n", 1);
	ft_putnbr_base(123456, "01234-56789");  // Invalid base due to '-'
    write(1, "\n", 1);
	ft_putnbr_base(123456, "");  // Empty base
    write(1, "\n", 1);
	ft_putnbr_base(123456, "0"); // Base of size 1, also invalid
    write(1, "\n", 1);

	return 0;
}

*/

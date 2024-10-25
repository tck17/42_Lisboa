/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:08:08 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/29 10:47:06 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hex(long value, int size)
{
	char	hex_digits[16];
	char	buffer[16];
	int		i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
			hex_digits[i] = '0' + i;
		else
			hex_digits[i] = 'a' + (i - 10);
		i++;
	}
	i = size -1;
	while (i >= 0)
	{
		buffer[i] = hex_digits[value % 16];
		value /= 16;
		i--;
	}
	write(1, buffer, size);
}

void	write_byte_as_hex(char byte)
{
	char	hex_digits[16];
	char	pair_hex[16];

	hex_digits[0] = '0';
	hex_digits[1] = '1';
	hex_digits[2] = '2';
	hex_digits[3] = '3';
	hex_digits[4] = '4';
	hex_digits[5] = '5';
	hex_digits[6] = '6';
	hex_digits[7] = '7';
	hex_digits[8] = '8';
	hex_digits[9] = '9';
	hex_digits[10] = 'a';
	hex_digits[11] = 'b';
	hex_digits[12] = 'c';
	hex_digits[13] = 'd';
	hex_digits[14] = 'e';
	hex_digits[15] = 'f';
	pair_hex[0] = hex_digits[byte / 16];
	pair_hex[1] = hex_digits[byte % 16];
	write(1, pair_hex, 2);
}

void	write_memory_content(char *ptr, unsigned int size, unsigned int i)
{
	unsigned int	j;
	char			dot;

	dot = '.';
	j = 0;
	while (j < 16)
	{
		if (i + j < size)
		{
			if (ptr[i + j] >= 32 && ptr[i + j] <= 126)
				write(1, &ptr[i + j], 1);
			else
				write(1, &dot, 1);
		}
		j++;
	}
}

void	ft_print_hex_and_ascii(char *ptr, unsigned int size,
				long addr_begin, unsigned int i)
{
	unsigned int	j;

	write_hex(addr_begin + i, 16);
	write(1, ": ", 2);
	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			write_hex(ptr[i + j], 2);
		else
			write(1, "  ", 2);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
	write_memory_content(ptr, size, i);
	write(1, "\n", 1);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	char			*ptr;
	long			addr_begin;
	unsigned int	i;

	ptr = addr;
	addr_begin = (long)addr;
	i = 0;
	while (i < size)
	{
		ft_print_hex_and_ascii(ptr, size, addr_begin, i);
		i += 16;
	}
}

/*
int main(void)
{
    // Test with a string
    char test_str[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce \
qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";
    ft_print_memory(test_str,92);
    return 0;
}
*/

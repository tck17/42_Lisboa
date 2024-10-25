/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:07:37 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/29 10:41:53 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_non_printable(unsigned char c)
{
	if ((c >= 0 && c <= 31) || (c >= 127))
		return (1);
	else
		return (0);
}

static void	print_hex(unsigned char np)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[np / 16], 1);
	write(1, &hex[np % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_non_printable(str[i]))
		{
			write(1, "\\", 1);
			print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*

#include <stdio.h>

int main(void)
{
    char test_str[] = "Hello\nWorld\t!";
	char test_str1[] = "Ola\nesta bem?";
	test_str[2] = -1;
    ft_putstr_non_printable(test_str);
    printf("\n");
	ft_putstr_non_printable(test_str1);
    return 0;
}

*/

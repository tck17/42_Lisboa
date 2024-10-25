/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:15:35 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/31 14:25:03 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writestr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

void	ft_convert(char *str, int nb, int *i)
{
	if (nb < 0)
	{
		str[(*i)++] = '-';
		if (nb == -2147483648)
		{
			str[(*i)++] = '2';
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb >= 10)
		ft_convert(str, nb / 10, i);
	str[(*i)++] = (nb % 10) + '0';
}

void	ft_inttostr(int nb, char *str)
{
	int	i;

	i = 0;
	ft_convert(str, nb, &i);
	str[i] = '\0';
}

void	ft_putnbr(int nb)
{
	char	buffer[12];

	ft_inttostr(nb, buffer);
	ft_writestr(buffer);
}

/*

int main()
{
    // Test cases for ft_putnbr
    ft_putnbr(12345);
    write(1, "\n", 1);
    ft_putnbr(-12345);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);

    return 0;
}

*/

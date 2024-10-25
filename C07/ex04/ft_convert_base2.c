/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:44:31 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/04 14:53:59 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	size_of_num(long int nbr, int base_len, int is_neg)
{
	int	size;

	size = 0;
	if (is_neg == -1)
		size++;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= base_len;
		size++;
	}
	return (size);
}

char	*ft_print_rc(long int nbr, char *base, char *result, int is_neg)
{
	int		i;
	int		size;

	i = 0;
	size = size_of_num(nbr, ft_strlen(base), is_neg);
	if (is_neg == -1)
		result[0] = '-';
	if (nbr == 0)
	{
		result[0] = base[0];
		result[1] = '\0';
	}
	while (nbr > 0)
	{
		result[(size - i - 1)] = base[nbr % ft_strlen(base)];
		i++;
		nbr /= ft_strlen(base);
	}
	return (result);
}

char	*ft_putnbr_base(long int nbr, char *base, int is_neg)
{
	char			*result;
	long int		nb;
	int				base_len;
	int				size;

	base_len = ft_strlen(base);
	if (is_neg == -1)
		nb = -nbr;
	else
		nb = nbr;
	size = size_of_num(nb, base_len, is_neg);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	result[size] = '\0';
	if (nbr == 0)
	{
		result[0] = base[0];
		result[1] = '\0';
		return (result);
	}
	if (is_neg == -1)
		result[0] = '-';
	return (ft_print_rc(nb, base, result, is_neg));
}

int	is_valid_base(const char *base)
{
	int	length;
	int	i;
	int	j;

	length = ft_strlen(base);
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

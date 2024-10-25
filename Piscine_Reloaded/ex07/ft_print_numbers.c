/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:57:47 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 17:58:05 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	num;

	num = 48;
	while (num < 58)
	{
		ft_putchar(num);
		num++;
	}
}

/*

int	main(void)
{
	ft_print_numbers();
	return(0);
}

*/
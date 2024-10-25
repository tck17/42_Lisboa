/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:57:47 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/15 16:57:52 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

// 48 is the ASCII for 0
void	ft_print_numbers(void)
{
	char	num;

	num = 48;
	while (num < 58)
	{
		ft_put_char(num);
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

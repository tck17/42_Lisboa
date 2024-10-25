/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:19:51 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 15:47:26 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	type_num;

	if (n < 0)
	{
		type_num = 'N';
	}
	else
	{
		type_num = 'P';
	}
	ft_putchar(type_num);
}

/*
int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-5);
	return(0);
}
*/
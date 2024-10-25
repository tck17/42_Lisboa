/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:19:51 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/15 17:19:55 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

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
	ft_put_char(type_num);
}

/*
int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-5);
	return(0);
}
*/

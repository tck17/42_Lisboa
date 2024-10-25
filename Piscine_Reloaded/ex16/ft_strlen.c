/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:19:19 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 14:57:41 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*

#include <stdio.h>

int main(void)
{
	int	strlen;

	strlen = ft_strlen("Hey");
	printf("Length of string: %d", strlen);
	return (0);
}

*/
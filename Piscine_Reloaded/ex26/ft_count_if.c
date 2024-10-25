/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:32:57 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/25 13:43:36 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}

/*

#include <stdio.h>

int	contains_a(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *tab[] = {"apple", "banana", "cherry", "avocado", "grape", NULL};
	int result;

	result = ft_count_if(tab, &contains_a);
	printf("Number of strings containing 'a': %d\n", result);

	return (0);
}

*/
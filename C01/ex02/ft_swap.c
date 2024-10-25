/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:12:23 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/21 11:12:29 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*

#include <stdio.h>

int main(void)
{
	int a;
	int b;
    int *ptr_a;
	int *ptr_b;

    a = 1;
    b = 2;

	ptr_a = &a;
    ptr_b = &b;
	
	ft_swap(ptr_a, ptr_b);
	printf("a: %d, b: %d", a, b);
	return (0);
}

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:14:21 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/21 11:14:30 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*

#include <stdio.h>

int main(void)
{
	int a;
	int b;
    int *ptr_a;
    int *ptr_b;

    a = 15;
    b = 3;
    ptr_a = &a;
    ptr_b = &b;

    printf("Before function call - a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("After function call - a: %d, b: %d\n", 
		a, b);
	return (0);
}

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:13:35 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 14:41:24 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*

#include <stdio.h>

int main(void)
{
	int a;
	int b;
    int div;
	int mod;

    a = 15;
    b = 3;
	
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d, b: %d, div: %d, mod: %d", a, b, div, mod);
	return (0);
}

*/
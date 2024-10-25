/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:57:38 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/21 19:00:48 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	begin;
	int	finish;

	if (size > 0)
	{
		begin = 0;
		finish = size - 1;
		while (begin < finish)
		{
			temp = tab[begin];
			tab[begin] = tab[finish];
			tab[finish] = temp;
			begin++;
			finish--;
		}
	}
}

/*

#include <stdio.h>

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_rev_int_tab(tab, size);
    
    printf("Reversed array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    int tab1[] = {1, 2, 4, 5, 7, 8};
    size = sizeof(tab1) / sizeof(tab1[0]);

    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab1[i]);
    }
    printf("\n");

    ft_rev_int_tab(tab1, size);
    
    printf("Reversed array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab1[i]);
    }
    printf("\n");

    return 0;
}
*/

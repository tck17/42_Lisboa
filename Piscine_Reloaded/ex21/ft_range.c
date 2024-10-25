/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:42:36 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 15:08:22 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr_int;

	if (min >= max)
	{
		return (NULL);
	}
	arr_int = (int *)malloc(sizeof(*arr_int) * (max - min));
	if (arr_int == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		arr_int[i] = min;
		min++;
		i++;
	}
	return (arr_int);
}

/*

#include <stdio.h>

int main(void)
{
    int min = 5;
    int max = 10;
    int *arr;
    int i;

    // Testing ft_range
    arr = ft_range(min, max);

    // If arr is NULL, print an error message
    if (!arr)
    {
        printf("Error: memory allocation failed.\n");
        return (1);
    }

    // Print the values in the array
    printf("Range from %d to %d:\n", min, max);
    for (i = 0; i < (max - min); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}


*/
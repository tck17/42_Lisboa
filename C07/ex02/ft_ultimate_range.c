/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:43:04 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/05 17:01:29 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr_int;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr_int = (int *)malloc(sizeof(*arr_int) * (max - min));
	if (arr_int == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = arr_int;
	i = 0;
	while (min < max)
	{
		arr_int[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*

#include <stdio.h>

int main(void)
{
    int *arr;
    int size;
    int min = 3;
    int max = 7;
    int i;

    // Testing ft_ultimate_range
    size = ft_ultimate_range(&arr, min, max);

    // If size is negative, there's a memory allocation error
    if (size == -1)
    {
        printf("Error: memory allocation failed.\n");
        return (1);
    }

    // If size is 0, min was greater than or equal to max
    if (size == 0)
    {
        printf("Range is empty (min >= max).\n");
        return (0);
    }

    // Print the values in the array
    printf("Range from %d to %d:\n", min, max);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:17:58 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/29 16:32:23 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest [i] = '\0';
	return (dest);
}

/*

#include <stdio.h>
#include <string.h>

// Function prototypes
char *ft_strcat(char *dest, char *src);

int main() {
    // Test case setup
    char dest1[100] = "Hello, ";  // Ensure enough space for concatenation
    char src1[] = "World!";

    char dest2[100];
    strcpy(dest2, dest1);  // Copy initial content to dest2 for comparison
    char src2[] = "World!";

    // Test case 1: Compare ft_strcat with standard strcat
    printf("Before ft_strcat: %s\n", dest1);
    printf("Before strcat: %s\n", dest2);

    ft_strcat(dest1, src1);
    strcat(dest2, src2);

    printf("After ft_strcat: %s\n", dest1);
    printf("After strcat: %s\n", dest2);

    return 0;
}

*/

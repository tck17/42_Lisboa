/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:22:57 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/29 16:36:56 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*

strncat(char *dest, const char *src, size_t n)
{
    size_t dest_len = strlen(dest);
    size_t i;

   for (i = 0 ; i < n && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

   return dest;
}

*/

/*

#include <stdio.h>
#include <string.h>

// Function prototypes
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main() {
    char dest1[100] = "Hello, ";  // Ensure enough space for concatenation
    char src1[] = "World!";

    char dest2[100];
    strcpy(dest2, dest1);  // Copy initial content to dest2 for comparison
    char src2[] = "World!";

    // Test case 1: Concatenate first 3 characters from src
    printf("Before ft_strncat: %s\n", dest1);
    printf("Before strncat: %s\n", dest2);

    ft_strncat(dest1, src1, 3);
    strncat(dest2, src2, 3);

    printf("After ft_strncat (3 chars): %s\n", dest1);
    printf("After strncat (3 chars): %s\n", dest2);
    printf("\n");

    // Test case 2: Concatenate next 10 characters from src
    ft_strncat(dest1, src1 + 3, 10);  // Note: src1 + 3 skips first 3 characters
    strncat(dest2, src2 + 3, 10);     // Same test with strncat

    printf("After ft_strncat (remaining chars): %s\n", dest1);
    printf("After strncat (remaining chars): %s\n", dest2);

    return 0;
}

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:01:45 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/21 16:01:49 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*

#include <stdio.h>

int main(void)
{
    char src[] = "Hello, World!";
    char dest[20]; // Ensure this is large enough to hold src + null terminator
    unsigned int n;

    // Case 1: n is smaller than the length of src
    n = 5;
    ft_strncpy(dest, src, n);
    printf("Case 1 - n < length of src:\n");
    printf("Source string: %s\n", src);
    printf("Destination string after strncpy: %s\n", dest);
    printf("\n");

    // Case 2: n is equal to the length of src
    n = 13;
    ft_strncpy(dest, src, n);
    printf("Case 2 - n == length of src:\n");
    printf("Source string: %s\n", src);
    printf("Destination string after strncpy: %s\n", dest);
    printf("\n");

    // Case 3: n is larger than the length of src
    n = 20;
    ft_strncpy(dest, src, n);
    printf("Case 3 - n > length of src:\n");
    printf("Source string: %s\n", src);
    printf("Destination string after strncpy: %s\n", dest);

    return 0;
}

*/

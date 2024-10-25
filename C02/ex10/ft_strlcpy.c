/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:07:09 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/21 16:07:12 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*

#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest1[20];
    char dest2[20];
    char *src = "Hello, world!";
    unsigned int size1 = 10;
    unsigned int size2 = 5;
    unsigned int ret1, ret2;

    // Testing ft_strlcpy
    ret1 = ft_strlcpy(dest1, src, size1);
    ret2 = ft_strlcpy(dest2, src, size2);

    // Output the results
    printf("ft_strlcpy: copied string: \"%s\", length of source: %u\n", 
dest1, ret1);
    printf("ft_strlcpy: copied string: \"%s\", length of source: %u\n", 
dest2, ret2);

    // Comparing with the standard strlcpy (for systems that support it)
    #ifdef __APPLE__  // Ensure strlcpy is available
        char dest3[20];
        char dest4[20];
        unsigned int std_ret1 = strlcpy(dest3, src, size1);
        unsigned int std_ret2 = strlcpy(dest4, src, size2);
        printf("strlcpy: copied string: \"%s\", length of source: %u\n", 
dest3, std_ret1);
        printf("strlcpy: copied string: \"%s\", length of source: %u\n", 
dest4, std_ret2);
    #endif

    return 0;
}

*/

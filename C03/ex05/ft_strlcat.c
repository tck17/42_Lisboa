/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:09:33 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/31 11:59:45 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	else if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*

#include <stdio.h>
#include <string.h>

int main() {
    char dest1[20] = "Hello, ";
    char src1[] = "World!";

    char dest_1[20] = "Hello, ";
    char src_1[] = "World!";

    char dest2[10] = "Hi, ";
    char src2[] = "there";
    unsigned int size2 = 10;

    char dest_2[10] = "Hi, ";
    char src_2[] = "there";

    char dest3[15] = "Test";
    char src3[] = " String";
    unsigned int size3 = 0;

    char dest_3[15] = "Test";
    char src_3[] = " String";

    char dest4[5] = "abcd";
    char src4[] = "efg";
    unsigned int size4 = 4;

    char dest_4[5] = "abcd";
    char src_4[] = "efg";

    char dest5[15] = "";
    char src5[] = "Hello";
    unsigned int size5 = 15;

    char dest_5[15] = "";
    char src_5[] = "Hello";

    // Test Case 1
    printf("Test Case 1:\n");
    unsigned int result1 = ft_strlcat(dest1, src1, -1);
    unsigned int result_1 = strlcat(dest_1, src_1, -1);
    printf("Resulting string (ft_strlcat): \"%s\"\n", dest1);
    printf("Length attempted to create (ft_strlcat): %u\n", result1);
    printf("Resulting string (strlcat): \"%s\"\n", dest_1);
    printf("Length attempted to create (strlcat): %u\n\n", result_1);

    // Test Case 2
    printf("Test Case 2:\n");
    unsigned int result2 = ft_strlcat(dest2, src2, size2);
    unsigned int result_2 = strlcat(dest_2, src_2, size2);
    printf("Resulting string (ft_strlcat): \"%s\"\n", dest2);
    printf("Length attempted to create (ft_strlcat): %u\n", result2);
    printf("Resulting string (strlcat): \"%s\"\n", dest_2);
    printf("Length attempted to create (strlcat): %u\n\n", result_2);

    // Test Case 3
    printf("Test Case 3:\n");
    unsigned int result3 = ft_strlcat(dest3, src3, size3);
    unsigned int result_3 = strlcat(dest_3, src_3, size3);
    printf("Resulting string (ft_strlcat): \"%s\"\n", dest3);
    printf("Length attempted to create (ft_strlcat): %u\n", result3);
    printf("Resulting string (strlcat): \"%s\"\n", dest_3);
    printf("Length attempted to create (strlcat): %u\n\n", result_3);

    // Test Case 4
    printf("Test Case 4:\n");
    unsigned int result4 = ft_strlcat(dest4, src4, size4);
    unsigned int result_4 = strlcat(dest_4, src_4, size4);
    printf("Resulting string (ft_strlcat): \"%s\"\n", dest4);
    printf("Length attempted to create (ft_strlcat): %u\n", result4);
    printf("Resulting string (strlcat): \"%s\"\n", dest_4);
    printf("Length attempted to create (strlcat): %u\n\n", result_4);

    // Test Case 5
    printf("Test Case 5:\n");
    unsigned int result5 = ft_strlcat(dest5, src5, size5);
    unsigned int result_5 = strlcat(dest_5, src_5, size5);
    printf("Resulting string (ft_strlcat): \"%s\"\n", dest5);
    printf("Length attempted to create (ft_strlcat): %u\n", result5);
    printf("Resulting string (strlcat): \"%s\"\n", dest_5);
    printf("Length attempted to create (strlcat): %u\n", result_5);

    return 0;
}

*/
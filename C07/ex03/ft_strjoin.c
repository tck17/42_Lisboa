/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:43:46 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/03 18:33:06 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	calc_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (size - 1) * ft_strlen(sep);
	return (len);
}

char	*join_strings(int size, char **strs, char *sep, int total_length)
{
	char	*arr_str;
	int		i;
	int		j;
	int		c;

	arr_str = malloc(total_length + 1);
	if (!arr_str)
		return (NULL);
	c = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr_str[c++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				arr_str[c++] = sep[j++];
		}
		i++;
	}
	arr_str[c] = '\0';
	return (arr_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*arr_str;

	if (size == 0)
	{
		arr_str = malloc(1);
		if (arr_str)
			arr_str[0] = '\0';
		return (arr_str);
	}
	total_len = calc_total_len(size, strs, sep);
	return (join_strings(size, strs, sep, total_len));
}

/*

#include <stdio.h>

// Function prototypes
char	*ft_strjoin(int size, char **strs, char *sep);
int	ft_strlen(char *str);

int main(void)
{
    // Test 1: Regular case with multiple strings and a separator
    char *strs1[] = {"Hello", "world", "from", "ft_strjoin"};
    char *sep1 = "  *  ";
    char *result1 = ft_strjoin(4, strs1, sep1);
    if (result1)
    {
        printf("Test 1 Result: %s\n", result1);
        free(result1);
    }
    else
    {
        printf("Test 1 Memory allocation failed.\n");
    }

    // Test 2: Case with only one string and no separator
    char *strs2[] = {"SingleString"};
    char *sep2 = " | ";
    char *result2 = ft_strjoin(1, strs2, sep2);
    if (result2)
    {
        printf("Test 2 Result: %s\n", result2);
        free(result2);
    }
    else
    {
        printf("Test 2 Memory allocation failed.\n");
    }

    // Test 3: Case with no strings (size == 0)
    char *strs3[] = {"This", "test", "shouldn't", "print"};
    char *sep3 = " -- ";
    char *result3 = ft_strjoin(0, strs3, sep3);
    if (result3)
    {
        printf("Test 3 Result: \"%s\"\n", result3);  
		// Should print an empty string
        free(result3);
    }
    else
    {
        printf("Test 3 Memory allocation failed.\n");
    }
    return 0;
}

*/

// Test 4: Simulate memory allocation failure
// To simulate this, you would need to artificially force 
// malloc to fail.
// Here's how you can simulate this in a real scenario by 
// setting limits on allocations.
// Since this isn't possible directly in this environment, 
// here's the idea in principle:
// If malloc fails, the function should return NULL.

// Uncomment the following code to test in a controlled 
// environment with tools like Valgrind:
/*
    #include <limits.h>
    size_t max_size = (size_t) -1;  // Maximum size that malloc can allocate
    char *result4 = malloc(max_size);  // Try to allocate a huge amount of memory
    if (!result4)  // Simulate failure
    {
        printf("Test 4 Simulated Memory allocation failed.\n");
    }

    // For illustration, let's assume the allocation would fail for large sizes:
    char *strs4[] = {"This", "is", "a", "test", "for", "large", "strings"};
    char *sep4 = " separator ";
    char *result4 = ft_strjoin(INT_MAX / 100, strs4, sep4);  
	// Assuming this would cause failure
    if (!result4)
    {
        printf("Test 4 Simulated Memory allocation failed.\n");
    }
    else
    {
        printf("Test 4 Result: %s\n", result4);
        free(result4);
    }
    */
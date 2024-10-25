/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:45:20 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/05 11:11:03 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep_char(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	words_count(char *str, char *charset)
{
	int	i;
	int	num_words;

	num_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (sep_char(str[i + 1], charset) == 1
			&& sep_char(str[i], charset) == 0)
			num_words++;
		i++;
	}
	return (num_words);
}

void	write_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (sep_char(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (sep_char(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (sep_char(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			write_word(split[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	words = words_count(str, charset);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res[words] = 0;
	write_split(res, str, charset);
	return (res);
}

/*

#include <stdio.h>

// Declare your functions here
char    **ft_split(char *str, char *charset);

int main() {
    char str[] = "Hello,world! This is a test.";
    char charset[] = " ,!.";  
// Splitting based on space, comma, exclamation, and period
    char **result;
    int i;

    // Call ft_split
    result = ft_split(str, charset);

    // Print each word from the result
    i = 0;
    while (result[i]) {
        printf("Word %d: %s\n", i + 1, result[i]);
        free(result[i]); // Free each word after use
        i++;
    }

    free(result); // Free the array of pointers

    return 0;
}
*/

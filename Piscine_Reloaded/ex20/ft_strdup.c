/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:42:08 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/24 15:07:15 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dup = (char *)malloc(sizeof(*dup) * i + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%s\n", ft_strdup("hello"));
	printf("%s\n", strdup("hello"));
	return (0);
}
*/
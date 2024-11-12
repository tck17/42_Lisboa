/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:48:40 by anmiguel          #+#    #+#             */
/*   Updated: 2024/11/09 11:58:24 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = ft_calloc(1, sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*

#include <stdio.h>

int main(void)
{
    // Define some content for the node
    char *content = "Hello, world!";
    
    // Create a new list node using ft_lstnew
    t_list *node = ft_lstnew(content);
    
    // Check if the node was created successfully
    if (node != NULL)
    {
        // Print the content of the new node
        printf("Node content: %s\n", (char *)node->content);
    }
    else
    {
        printf("Failed to create node.\n");
    }
    
    // Free the allocated memory
    free(node);
    
    return 0;
}

*/
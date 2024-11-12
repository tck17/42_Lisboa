/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:45:16 by anmiguel          #+#    #+#             */
/*   Updated: 2024/11/09 13:59:31 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_node;
	t_list	*next_node;

	current_node = *lst;
	while (current_node)
	{
		next_node = current_node->next;
		ft_lstdelone(current_node, del);
		current_node = next_node;
	}
	*lst = NULL;
}

/*

#include <stdio.h>

// A simple del function to free the content of a node (assuming it's a string)
void del(void *content)
{
    free(content);
}

int main(void)
{
    // Create some nodes
    t_list *node1 = ft_lstnew(ft_strdup("First node"));
    t_list *node2 = ft_lstnew(ft_strdup("Second node"));
    t_list *node3 = ft_lstnew(ft_strdup("Third node"));

    // Link the nodes: node1 -> node2 -> node3
    node1->next = node2;
    node2->next = node3;

    // Print the list before clearing
    printf("List before clearing:\n");
    t_list *current = node1;
    while (current)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Clear the list
    ft_lstclear(&node1, del);

    // Print the list after clearing (should be empty)
    printf("\nList after clearing:\n");
    if (node1 == NULL)
    {
        printf("List is now empty.\n");
    }

    return 0;
}

*/
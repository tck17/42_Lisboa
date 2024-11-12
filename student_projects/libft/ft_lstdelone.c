/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:30:19 by anmiguel          #+#    #+#             */
/*   Updated: 2024/11/09 13:44:05 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del (lst->content);
		free (lst);
	}
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

    // Print the list before deletion
    printf("List before deletion:\n");
    t_list *current = node1;
    while (current)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Delete the second node (node2) and fix the previous node's next pointer
    if (node1->next == node2)  // Special case when deleting the second node
    {
        node1->next = node2->next; // Fix the first node's next pointer
    }
    ft_lstdelone(node2, del); // Free the second node

    // Print the list after deletion
    printf("\nList after deletion:\n");
    current = node1;
    while (current)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Free the remaining nodes
    ft_lstdelone(node1, del);
    ft_lstdelone(node3, del);

    return 0;
}

*/
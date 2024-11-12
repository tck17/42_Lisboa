/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:00:11 by anmiguel          #+#    #+#             */
/*   Updated: 2024/11/09 14:18:26 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*

#include <stdio.h>

// A simple function that will be applied to each node's content
void print_content(void *content)
{
    printf("Node content: %s\n", (char *)content);
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

    // Print the list before iteration
    printf("List before iteration:\n");
    ft_lstiter(node1, print_content);

    // Free the list content after iteration
    ft_lstdelone(node1, free);
    ft_lstdelone(node2, free);
    ft_lstdelone(node3, free);

    return 0;
}

*/
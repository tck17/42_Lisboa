/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:07:14 by anmiguel          #+#    #+#             */
/*   Updated: 2024/11/09 14:18:58 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// A function to transform each node's content (for example, 
// convert to uppercase)
void *to_uppercase(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str); // Make a copy of the string
    if (!new_str)
        return NULL;
    
    for (int i = 0; new_str[i]; i++)
    {
        new_str[i] = toupper(new_str[i]);
    }
    return (void *)new_str;
}

// A function to free content (strings in this case)
void del(void *content)
{
    free(content);
}

int main(void)
{
    // Create some nodes with string content
    t_list *node1 = ft_lstnew(ft_strdup("hello"));
    t_list *node2 = ft_lstnew(ft_strdup("world"));
    t_list *node3 = ft_lstnew(ft_strdup("test"));

    // Link the nodes: node1 -> node2 -> node3
    node1->next = node2;
    node2->next = node3;

    // Print the list before mapping
    printf("List before ft_lstmap:\n");
    t_list *current = node1;
    while (current)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Use ft_lstmap to create a new list with modified content
    t_list *new_list = ft_lstmap(node1, to_uppercase, del);

    // Print the new list after applying ft_lstmap
    printf("\nList after ft_lstmap:\n");
    current = new_list;
    while (current)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Clean up by freeing the lists
    ft_lstclear(&node1, del);
    ft_lstclear(&new_list, del);

    return 0;
}

*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-innoc <gd-innoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:02:14 by gd-innoc          #+#    #+#             */
/*   Updated: 2023/04/14 16:43:34 by gd-innoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// create a new node. Num is the arg received, index is -1 - it will only be
// used to sort 6+ numbers.
t_stack	*ft_lstnew(int num)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (0);
	head->num = num;
	head->index = -1;
	head->next = NULL;
	return (head);
}

// get size of list
int	ft_lstsize(t_stack *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// get last node
static t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// add a node at the end of the list
static void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*end;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	end = ft_lstlast(*lst);
	end->next = new;
}

// create a linked list for stack A from input arguments.
void	create_stack(int argc, char **argv, t_stack **stack)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_lstadd_back(stack, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
}

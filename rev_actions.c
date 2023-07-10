/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_actions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-innoc <gd-innoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:56:20 by gd-innoc          #+#    #+#             */
/*   Updated: 2023/04/14 16:55:18 by gd-innoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rev(t_stack **head)
{
	t_stack	*tmp;

	tmp = *head;
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = tmp;
	while (tmp->next != *head)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	ft_rra(t_stack **stack_a)
{
	ft_rev(stack_a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **stack_b)
{
	ft_rev(stack_b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rev(stack_a);
	ft_rev(stack_b);
	write(1, "rrr\n", 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-innoc <gd-innoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:51:03 by gd-innoc          #+#    #+#             */
/*   Updated: 2023/04/14 16:51:28 by gd-innoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_stack **headA, t_stack **headB)
{
	t_stack	*tmp;

	if ((*headB) == NULL)
		return ;
	tmp = (*headB);
	*headB = (*headB)->next;
	tmp->next = *headA;
	*headA = tmp;
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_b, stack_a);
	write(1, "pb\n", 3);
}

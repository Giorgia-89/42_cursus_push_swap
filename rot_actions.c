/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_actions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-innoc <gd-innoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:57:10 by gd-innoc          #+#    #+#             */
/*   Updated: 2023/04/14 16:55:54 by gd-innoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rot(t_stack **head)
{
	t_stack	*tmp;

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *head;
	*head = (*head)->next;
	tmp->next->next = NULL;
}

void	ft_ra(t_stack **stack_a)
{
	ft_rot(stack_a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **stack_b)
{
	ft_rot(stack_b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rot(stack_a);
	ft_rot(stack_b);
	write(1, "rr\n", 3);
}

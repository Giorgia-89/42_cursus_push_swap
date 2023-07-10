/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-innoc <gd-innoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:59:57 by gd-innoc          #+#    #+#             */
/*   Updated: 2023/04/14 16:51:18 by gd-innoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// find the the minimum int in a list
int	find_min(t_stack **stack)
{
	int		min;
	t_stack	*tmp;

	tmp = *stack;
	min = tmp->num;
	while (tmp->next)
	{
		if (tmp->next->num < min)
			min = tmp->next->num;
		tmp = tmp->next;
	}
	return (min);
}

// find the position of the minimum int in the list
int	find_pos(t_stack **stack_a)
{
	int		min;
	int		i;
	t_stack	*tmp;

	min = INT_MAX;
	i = 1;
	tmp = (*stack_a);
	while (tmp)
	{
		if (tmp->num < min)
			min = tmp->num;
		tmp = tmp->next;
	}
	tmp = (*stack_a);
	while (tmp && min != tmp->num)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

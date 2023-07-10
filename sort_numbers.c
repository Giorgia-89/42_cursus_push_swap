/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-innoc <gd-innoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:13:29 by gd-innoc          #+#    #+#             */
/*   Updated: 2023/04/14 17:00:33 by gd-innoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// check if numbers in stack are already sorted. If so, return 1
int	check_order(t_stack *stack)
{
	while (stack->next != NULL && stack->num < stack->next->num)
		stack = stack->next;
	if (stack->next == NULL)
		return (1);
	return (0);
}

// sort two numbers
void	sort_two(t_stack **stack_a)
{
	if ((*stack_a)->num > (*stack_a)->next->num)
		ft_sa(stack_a);
}

// check number of args and send stack to the corresponding sorter
void	sort_numbers(int argc, t_stack **stack_a, t_stack **stack_b)
{
	if (argc <= 2 || check_order(*stack_a) == 1)
		return ;
	else if (argc == 3)
		sort_two(stack_a);
	else if (argc == 4)
		sort_three(argc, stack_a);
	else if (argc <= 6)
		sort_five(stack_a, stack_b);
	else if (argc > 6)
	{
		allocate_index(stack_a);
		sort_long(stack_a, stack_b);
	}
}

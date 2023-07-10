/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-innoc <gd-innoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:19:50 by gd-innoc          #+#    #+#             */
/*   Updated: 2023/04/14 17:07:42 by gd-innoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// sort cases with up to three
void	sort_three(int argc, t_stack **stack_a)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = (*stack_a)->num;
	n2 = (*stack_a)->next->num;
	n3 = (*stack_a)->next->next->num;
	if (argc == 4 && n1 > n2 && n2 < n3 && n3 > n1)
		ft_sa(stack_a);
	else if (n1 < n2 && n2 > n3 && n3 > n1)
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	else if (n1 > n2 && n2 < n3 && n3 < n1)
		ft_ra(stack_a);
	else if (n1 < n2 && n2 > n3 && n3 < n1)
		ft_rra(stack_a);
	else if (n1 > n2 && n2 > n3 && n3 < n1)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
}

// Check position of minimum int in stack_a. Based on its index, use either
// ra or rra to move it to the top of the stack. Once it's at the top,
// push it to B
static void	move_and_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	i = find_pos(stack_a);
	if (i == 2)
		ft_ra(stack_a);
	else if (i == 3)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (i == 4)
		ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	sort_three(4, stack_a);
}

//move the first of five numbers to the top of A and push it to B
static void	move_5(t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	i = find_pos(stack_a);
	if (i == 2)
		ft_ra(stack_a);
	else if (i == 3)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if (i == 4)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (i == 5)
		ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
}

// sort cases with 4 or 5. If lstsize is 5, move_5 is called to find
// the position of the min int, move it to the top of A and then push
// it to B. Then, function move and sort is called to repeat the process
// for four list nodes and to sort the remaining three items in stack_a.
// Finally, pa is called twice (because it does nothing if stack_b is
// already empty)
void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) == 5)
		move_5(stack_a, stack_b);
	move_and_sort(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

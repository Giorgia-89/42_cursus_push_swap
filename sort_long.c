/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-innoc <gd-innoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:38:07 by gd-innoc          #+#    #+#             */
/*   Updated: 2023/04/14 16:59:41 by gd-innoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Traverse the stack until we find a node that has not been given an
// index yet (index == -1) and compare that node with all other unsorted
// nodes to find the one with the smallest num value. Return that node
// On first iteration, min is initialised to the first unsorted node
// encountered, and then the list is traversed to compare each tmp node
// to min and reallocate min if a smaller value is encountered
static t_stack	*find_next_min(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*min;
	int		stop;

	tmp = (*stack);
	min = NULL;
	stop = 0;
	if (tmp)
	{
		while (tmp)
		{
			if ((tmp->index == -1) && (stop == 0 || tmp->num < min->num))
			{
				min = tmp;
				stop = 1;
			}
			tmp = tmp->next;
		}
	}
	return (min);
}

// search for the minimum number in the stack and allocate index
// in ascending order starting from 1.
void	allocate_index(t_stack **stack)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	tmp = find_next_min(stack);
	while (tmp)
	{
		tmp->index = i;
		tmp = find_next_min(stack);
		i++;
	}
}

// adapted radix algorithm: starting from the head of stack_a,
// use the right-shift operator >> to transform the index of
// the current node into binary and shift all of its bites to
// the right by i positions. This allows to sort binary numbers
// based on the value of each of its digit, starting from the
// right.
void	sort_long(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ft_lstsize(*stack_a);
	while (check_order(*stack_a) == 0)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) % 2) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
			j++;
		}
		i++;
		while ((*stack_b))
			ft_pa(stack_a, stack_b);
	}
}

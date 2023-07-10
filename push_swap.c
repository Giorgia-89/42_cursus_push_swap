/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-innoc <gd-innoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:52:21 by gd-innoc          #+#    #+#             */
/*   Updated: 2023/04/14 16:48:56 by gd-innoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// function to free the stack - to be called at the end of the main
void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	stack = NULL;
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if ((check_args(argc, argv) == 0) || (check_dupli(argc, argv) == 0) \
	|| check_max(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	create_stack(argc, argv, &stack_a);
	sort_numbers(argc, &stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
}

/*
void	print_list(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (tmp)
	{
		printf("[%d]->", tmp->num);
		tmp = tmp->next;
	}
}
*/
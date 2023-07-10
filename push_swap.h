/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-innoc <gd-innoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:19:01 by gd-innoc          #+#    #+#             */
/*   Updated: 2023/04/14 16:54:43 by gd-innoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

// define the structure of the stack (i.e., list)
typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}	t_stack;

// error_checks.c
int			check_args(int argc, char **argv);
int			check_dupli(int argc, char **argv);
int			check_max(int argc, char **argv);
// create_stack.c
t_stack		*ft_lstnew(int num);
int			ft_lstsize(t_stack *lst);
void		create_stack(int argc, char **argv, t_stack **stack);
// find.c
int			find_min(t_stack **stack_a);
int			find_pos(t_stack **stack_a);
// ft_atoi.c
long long	ft_atoi(char const *str);
// ft_isdigit.c
int			ft_isdigit(char str);
// ft_strlen.c
int			ft_strlen(char *str);
// push_actions.c
void		ft_pa(t_stack **stack_a, t_stack **stack_b);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);
// push_swap.c
void		free_stack(t_stack **stack);
void		print_list(t_stack *lst);
// rev_actions.c
void		ft_rra(t_stack **stack_a);
void		ft_rrb(t_stack **stack_b);
void		ft_rrr(t_stack **stack_a, t_stack **stack_b);
// rot_actions.c
void		ft_ra(t_stack **stack_a);
void		ft_rb(t_stack **stack_b);
void		ft_rr(t_stack **stack_a, t_stack **stack_b);
// sort_five.c
void		sort_three(int argc, t_stack **stack_a);
void		sort_five(t_stack **stack_a, t_stack **stack_b);
// sort_long.c
void		sort_long(t_stack **stack_a, t_stack **stack_b);
void		allocate_index(t_stack **stack_a);
// sort_numbers.c
int			check_order(t_stack *stack);
void		sort_two(t_stack **stack_a);
void		sort_numbers(int argc, t_stack **stack_a, t_stack **stack_b);
// swap_actions.c
void		ft_sa(t_stack **stack_a);
void		ft_sb(t_stack **stack_b);
void		ft_ss(t_stack **stack_a, t_stack **stack_b);

#endif
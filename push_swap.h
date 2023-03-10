/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:29:45 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/09 16:29:17 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

typedef struct l_list
{
	long int			value;
	int					position;
	struct l_list		*next;
}t_stack;

/*input check*/
int			arg_is_number(char *av);
int			arg_has_duplicate(char **av);
int			arg_is_zero(char *av);
int			valid_input(char **av);

/*input check utils*/
int			is_digit(char c);
int			is_sign(char c);
int			n_string_compare(const	char *s1, const char *s2);

/*utils*/
int			ft_error(void);
long int	ft_atoi(const char *str);
void		free_stack(t_stack **stack);
int			is_sorted(t_stack *stack);

/*initialize stack*/
t_stack		*fill_stack(int ac, char **av);
void		init_pos(t_stack *stack_a);

/*stack utils*/
t_stack		*stack_new_node(long int content);
void		stack_add_bottom(t_stack **stack, t_stack *new_node);
int			stack_size(t_stack *stack_a);
t_stack		*get_stack_bottom(t_stack *stack);
t_stack		*get_stack_before_bottom(t_stack *stack);

/*swap*/
void		swap(t_stack *stack);
void		use_sa(t_stack *stack_a);
void		use_sb(t_stack *stack_b);
void		use_ss(t_stack *stack_a, t_stack *stack_b);

/*push*/
void		push(t_stack **start, t_stack **end);
void		use_pa(t_stack **stack_b, t_stack **stack_a);
void		use_pb(t_stack **stack_a, t_stack **stack_b);

/*rotate*/
void		rotate(t_stack **stack);
void		use_ra(t_stack **stack_a);
void		use_rb(t_stack **stack_b);
void		use_rr(t_stack **stack_a, t_stack **stack_b);

/*reverse rotate*/
void		reverse_rotate(t_stack **stack);
void		use_rra(t_stack **stack_a);
void		use_rrb(t_stack **stack_b);
void		use_rrr(t_stack **stack_a, t_stack **stack_b);

/*sort 3 or 2*/
void		sort_3(t_stack **stack);
void		sort_2(t_stack **stack);

/*sort 4*/
void		sort_4(t_stack	**stack_a, t_stack **stack_b);

/*sort 5*/
void		sort_5(t_stack **stack_a, t_stack **stack_b);

/*sort pick*/
void		pick_sort(t_stack **stack_a, t_stack **stack_b, int size);

/*get small or big*/
int			get_smallest(t_stack **stack);
int			get_second_smallest(t_stack **stack);
int			get_biggest(t_stack **stack);
int			get_second_biggest(t_stack **stack);

/*cost*/
t_stack		*min_cost_adress(t_stack *stack_a, t_stack *stack_b);
int			current_cost(t_stack *stack_a, t_stack *stack_b, t_stack *current);

/*cost utils*/
int			cost_a_above(int above, t_stack	*stack_a);
int			cost_a_below(int below, t_stack *stack_a);

/*algorithm*/
void		algorithm(t_stack **stack_a, t_stack **stack_b);

/*do moves*/
void		do_moves(t_stack **stack_a, t_stack **stack_b, t_stack *b_target);

/*do moves below utils*/
void		rev_rotate_both1(t_stack **a, t_stack **b, int *a_id, int *b_id);
void		rotate_both1(t_stack **a, t_stack **b, int *a_id, int *b_id);
void		rotate_a1(t_stack **a, int *a_id);
void		rotate_b1(t_stack **b, int *b_id);

/*do moves above utils*/
void		rev_rotate_both2(t_stack **a, t_stack **b, int *a_id, int *b_id);
void		rotate_both2(t_stack **a, t_stack **b, int *a_id, int *b_id);
void		rotate_a2(t_stack **a, int *a_id);
void		rotate_b2(t_stack **b, int *b_id);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:15:20 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/09 18:19:45 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_moves_below(t_stack **stack_a, t_stack **stack_b, int a_id, int b_id)
{
	int	s_a;
	int	s_b;

	s_a = stack_size(*stack_a);
	s_b = stack_size(*stack_b);
	if (a_id <= s_a / 2 && b_id <= s_b / 2 && b_id != 1 && a_id != s_a)
		rotate_both1(stack_a, stack_b, &a_id, &b_id);
	else if (a_id > s_a / 2 && b_id > s_b / 2 && b_id != 1 && a_id != s_a)
		rev_rotate_both1(stack_a, stack_b, &a_id, &b_id);
	rotate_a1(stack_a, &a_id);
	rotate_b1(stack_b, &b_id);
	use_pa(stack_b, stack_a);
}

void	do_moves_above(t_stack **stack_a, t_stack **stack_b, int a_id, int b_id)
{
	int	s_a;
	int	s_b;

	s_a = stack_size(*stack_a);
	s_b = stack_size(*stack_b);
	if (a_id <= s_a / 2 && b_id <= s_b / 2 && b_id != 1 && a_id != 1)
		rotate_both2(stack_a, stack_b, &a_id, &b_id);
	else if (a_id > s_a / 2 && b_id > s_b / 2 && b_id != 1 && a_id != 1)
		rev_rotate_both2(stack_a, stack_b, &a_id, &b_id);
	rotate_a2(stack_a, &a_id);
	rotate_b2(stack_b, &b_id);
	use_pa(stack_b, stack_a);
}

int	get_id(t_stack *stack, int target)
{
	t_stack	*tmp;
	int		i;

	tmp = stack;
	i = 1;
	while (tmp->position != target)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	get_target(t_stack *stack_a, int b_pos, int above, int below)
{
	int		pos_b;
	t_stack	*tmp_a;

	tmp_a = stack_a;
	pos_b = b_pos;
	while (tmp_a)
	{
		if (tmp_a->position > pos_b && tmp_a->position < above)
			above = tmp_a->position;
		tmp_a = tmp_a->next;
	}
	if (above != INT_MAX)
		return (above);
	tmp_a = stack_a;
	while (tmp_a)
	{
		if (tmp_a->position < pos_b && tmp_a->position > below)
			below = tmp_a->position;
		tmp_a = tmp_a->next;
	}
	return (below);
}

void	do_moves(t_stack **stack_a, t_stack **stack_b, t_stack *b_target)
{
	int	a_target;
	int	a_id;
	int	b_id;

	a_target = get_target(*stack_a, (b_target)->position, INT_MAX, INT_MIN);
	a_id = get_id(*stack_a, a_target);
	b_id = get_id(*stack_b, (b_target)->position);
	if (a_target > (b_target)->position)
		do_moves_above(stack_a, stack_b, a_id, b_id);
	else if (a_target < (b_target)->position)
		do_moves_below(stack_a, stack_b, a_id, b_id);
}

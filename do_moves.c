/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:15:20 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/07 12:35:22 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_target(t_stack *stack_a, t_stack *stack_b, int above, int below)
{
	int		pos_b;
	t_stack	*tmp_a;

	tmp_a = stack_a;
	pos_b = stack_b->position;
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

void	do_moves(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	target;
	int	i;

	size = stack_size(*stack_a);
	target = get_target(*stack_a, *stack_b, INT_MAX, INT_MIN);
	i = 0;
	if (current_cost(*stack_a, *stack_b) == 1)
	{
		use_pa(stack_b, stack_a);
		return ;
	}
}

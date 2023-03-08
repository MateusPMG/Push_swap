/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:30:51 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/08 13:33:42 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_a(t_stack *stack_a, t_stack *stack_b, int above, int below)
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
		return (cost_a_above(above, stack_a));
	tmp_a = stack_a;
	while (tmp_a)
	{
		if (tmp_a->position < pos_b && tmp_a->position > below)
			below = tmp_a->position;
		tmp_a = tmp_a->next;
	}
	return (cost_a_below(below, stack_a));
}

int	cost_b(t_stack *stack_b)
{
	int		i;
	int		cost_b;
	int		size;
	t_stack	*tmp_b;

	tmp_b = stack_b;
	size = stack_size(stack_b);
	i = 0;
	cost_b = 0;
	if (tmp_b->next == NULL)
		return (cost_b);
	while (tmp_b)
	{
		tmp_b = tmp_b->next;
		i++;
	}
	if (i > size / 2)
		cost_b = size - i;
	else if (i <= size / 2)
		cost_b = i;
	return (cost_b);
}

int	current_cost(t_stack *stack_a, t_stack *stack_b)
{
	int		cost;

	cost = cost_b(stack_b) + 1 + cost_a(stack_a, stack_b, INT_MAX, INT_MIN);
	return (cost);
}

t_stack	*min_cost_adress(t_stack *stack_a, t_stack *stack_b)
{
	int		cost;
	t_stack	*adress_b;
	t_stack	*tmp;

	if (stack_b->next == NULL)
		return (stack_b);
	tmp = stack_b->next;
	cost = current_cost(stack_a, stack_b);
	adress_b = stack_b;
	while (tmp)
	{
		if (cost < current_cost(stack_a, tmp))
		{
			cost = current_cost(stack_a, tmp);
			adress_b = tmp;
		}
		tmp = tmp->next;
	}
	return (adress_b);
}

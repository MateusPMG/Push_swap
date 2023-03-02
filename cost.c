/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:30:51 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/02 18:07:12 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	current_cost(t_stack *stack_a, t_stack *stack_b)
{
	int		cost;

	cost = get_cost_b(stack_b) + 1 + get_cost_a(stack_a, stack_b);
	return (cost);
}

int	get_cost_b(t_stack *stack_b)
{
	int		i;
	int		cost_b;
	int		size;
	t_stack	*tmp_b;

	tmp_b = stack_b;
	size = stack_size(stack_b);
	i = 0;
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

int	get_cost_a(t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	int		cost_a;
	int		size;
	t_stack	*tmp_a;

	tmp_a = stack_a;
	
}

t_stack	*min_cost_adress(t_stack *stack_a, t_stack *stack_b)
{
	int		cost;
	t_stack	*adress_b;
	t_stack	*tmp;

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

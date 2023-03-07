/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:06:44 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/07 16:12:13 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	keep_5(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	pushed;
	int	i;

	size = stack_size(*stack_a);
	pushed = 0;
	i = 0;
	while (size > 5 && pushed < size / 2 && i < size)
	{
		if ((*stack_a)->position <= size / 2)
		{
			use_pb(stack_a, stack_b);
			pushed++;
		}
		else
			use_ra(stack_a);
		i++;
	}
	while (size - pushed > 5)
	{
		use_pb(stack_a, stack_b);
		pushed++;
	}
}

int	lowest_position_id(t_stack **stack_a)
{
	t_stack	*tmp;
	int		i;
	int		j;

	tmp = *stack_a;
	i = INT_MAX;
	while (tmp)
	{
		if (tmp->position < i)
			i = tmp->position;
		tmp = tmp->next;
	}
	tmp = *stack_a;
	j = 1;
	while (tmp->position != i)
	{
		j++;
		tmp = tmp->next;
	}
	return (j);
}

void	shift_stack(t_stack **stack_a)
{
	int	lowest_id;
	int	size;

	size = stack_size(*stack_a);
	lowest_id = lowest_position_id(stack_a);
	if (lowest_id > size / 2)
	{
		while (lowest_id < size + 1)
		{
			use_rra(stack_a);
			lowest_id++;
		}
	}
	else
	{
		while (lowest_id > 1)
		{
			use_ra(stack_a);
			lowest_id--;
		}
	}
}

void	algorithm(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	**tmp;

	keep_5(stack_a, stack_b);
	sort_5(stack_a, stack_b);
	while (*stack_b)
	{
		*tmp = min_cost_adress(*stack_a, *stack_b);
		do_moves(stack_a, stack_b, tmp);
	}
	if (!is_sorted(*stack_a))
		shift_stack(stack_a);
}

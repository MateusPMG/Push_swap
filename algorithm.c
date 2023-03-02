/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:06:44 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/02 18:04:15 by mpatrao          ###   ########.fr       */
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

void	algorithm(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	keep_5(stack_a, stack_b);
	sort_5(stack_a, stack_b);
	while (*stack_b)
	{
		tmp = min_cost_adress(*stack_a, *stack_b);
		do_moves(tmp);
	}
}

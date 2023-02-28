/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:26:34 by mpatrao           #+#    #+#             */
/*   Updated: 2023/02/28 14:55:29 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_smallest_b2(t_stack **stack_a, t_stack **stack_b, long int a)
{
	if ((*stack_a)->value == a)
		use_pb(stack_a, stack_a);
	else if ((*stack_a)->next->value == a)
	{
		use_ra(stack_a);
		use_pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->value == a)
	{
		use_ra(stack_a);
		use_ra(stack_a);
		use_pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->next->value == a)
	{
		use_rra(stack_a);
		use_rra(stack_a);
		use_pb(stack_a, stack_b);
	}
	else
	{
		use_rra(stack_a);
		use_pb(stack_a, stack_b);
	}
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	long int	a;

	a = get_smallest(stack_a);
	push_smallest_b2(stack_a, stack_b, a);
	sort_4(stack_a, stack_b);
	use_pa(stack_b, stack_a);
}

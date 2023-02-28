/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_or_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:31:21 by mpatrao           #+#    #+#             */
/*   Updated: 2023/02/28 14:25:35 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_smallest_b(t_stack	**stack_a, t_stack **stack_b, long int a)
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
	else
	{
		use_rra(stack_a);
		use_pb(stack_a, stack_b);
	}
}

void	s4_first(t_stack **stack_a, t_stack **stack_b, long int d, long int a)
{
	if ((*stack_a)->next->next->next->value == d)
	{
		if ((*stack_a)->next->value == a)
			use_ra(stack_a);
		else
		{
			use_ra(stack_a);
			use_sa(*stack_a);
		}
		return ;
	}
	use_pb(stack_a, stack_b);
	sort_3(stack_a);
	use_pa(stack_b, stack_a);
	use_ra(stack_a);
}

void	sort_4(t_stack	**stack_a, t_stack **stack_b)
{
	long int	a;
	long int	b;
	long int	d;

	a = get_smallest(stack_a);
	b = get_biggest(stack_a);
	d = get_second_biggest(stack_a);
	if (is_sorted(*stack_a))
		return ;
	if (a == (*stack_a)->value)
	{
		use_pb(stack_a, stack_b);
		sort_3(stack_a);
		use_pa(stack_b, stack_a);
	}
	else if (b == (*stack_a)->value)
		s4_first(stack_a, stack_b, d, a);
	else
	{
		push_smallest_b(stack_a, stack_b, a);
		sort_3(stack_a);
		use_pa(stack_b, stack_a);
	}
}

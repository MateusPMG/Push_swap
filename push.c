/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:42:05 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/09 15:37:39 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **start, t_stack **end)
{
	t_stack	*tmp;

	if (!start)
		return ;
	tmp = (*start)->next;
	(*start)->next = *end;
	*end = *start;
	*start = tmp;
}

void	use_pa(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	use_pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:42:34 by mpatrao           #+#    #+#             */
/*   Updated: 2023/02/22 14:40:51 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*bottom;
	t_stack	*before_bottom;

	bottom = get_stack_bottom(*stack);
	before_bottom = get_stack_before_bottom(*stack);
	tmp = *stack;
	*stack = bottom;
	(*stack)->next = tmp;
	before_bottom->next = NULL;
}

void	use_rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	write(2, "rra\n", 4);
}

void	use_rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	write(2, "rrb\n", 4);
}

void	use_rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(2, "rrr\n", 4);
}

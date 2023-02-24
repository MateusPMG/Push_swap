/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:41:51 by mpatrao           #+#    #+#             */
/*   Updated: 2023/02/23 17:10:16 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*bottom;

	tmp = stack;
	stack = stack->next;
	bottom = get_stack_bottom(stack);
	tmp->next = NULL;
	bottom->next = tmp;
	tmp->next = NULL;
}

void	use_ra(t_stack **stack_a)
{
	rotate(stack_a);
	write(2, "ra\n", 3);
}

void	use_rb(t_stack **stack_b)
{
	rotate(stack_b);
	write(2, "rb\n", 3);
}

void	use_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(2, "rr\n", 3);
}

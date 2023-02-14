/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:41:42 by mpatrao           #+#    #+#             */
/*   Updated: 2023/02/14 18:48:00 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	long int	i;
	long int	j;

	if ((stack) && (stack->next))
	{
		i = stack->value;
		j = stack->next->value;
		stack->value = j;
		stack->next->value = i;
	}
}

void	do_sa(t_stack *stack_a)
{
	swap(stack_a);
	write(2, "sa\n", 3);
}

void	do_sb(t_stack *stack_b)
{
	swap(stack_b);
	write(2, "sb\n", 3);
}

void	do_ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write (2, "ss\n", 3);
}

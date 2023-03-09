/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:41:42 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/09 15:37:23 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	long int	i;
	long int	j;
	long int	p1;
	long int	p2;

		p1 = stack->position;
		p2 = stack->next->position;
		i = stack->value;
		j = stack->next->value;
		stack->value = j;
		stack->next->value = i;
		stack->position = p2;
		stack->next->position = p1;
}

void	use_sa(t_stack *stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	use_sb(t_stack *stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	use_ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write (1, "ss\n", 3);
}

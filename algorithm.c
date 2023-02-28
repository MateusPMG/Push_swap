/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:06:44 by mpatrao           #+#    #+#             */
/*   Updated: 2023/02/28 16:38:21 by mpatrao          ###   ########.fr       */
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
	while ((size - pushed) != 5)
	{
		
	}
}

void	algorithm(t_stack **stack_a, t_stack **stack_b)
{
	keep_5(stack_a, stack_b);
	sort_5(stack_a, stack_b);
	
}

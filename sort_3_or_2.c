/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_or_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:45:06 by mpatrao           #+#    #+#             */
/*   Updated: 2023/02/23 17:10:42 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **stack)
{
	long int		a;
	long int		b;
	long int		c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;
	if (is_sorted(*stack))
		return ;
	if (a < b && c > a)
	{
		use_sa(*stack);
		use_ra(stack);
	}
	else if (a > b && c > a)
		use_sa(*stack);
	else if (b > a && a > c)
		use_rra(stack);
	else if (a > b && b < c)
		use_ra(stack);
	else if (a > b && b > c)
	{
		use_sa(*stack);
		use_rra(stack);
	}
}

void	sort_2(t_stack **stack)
{
	long int		a;
	long int		b;

	a = (*stack)->value;
	b = (*stack)->next->value;
	if (a > b)
		use_sa(*stack);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_or_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:31:21 by mpatrao           #+#    #+#             */
/*   Updated: 2023/02/24 15:42:22 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4(t_stack	**stack_a, t_stack **stack_b)
{
	long int	a;

	a = get_smallest(stack_a);
	if (a == (*stack_a)->value)
	{
		use_pb(stack_a, stack_b);
		sort_3(stack_a);
		use_pa(stack_b, stack_a);
	}
	if (a == )
}

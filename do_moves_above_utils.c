/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_moves_above_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:24:18 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/09 18:32:43 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_both2(t_stack **a, t_stack **b, int *a_id, int *b_id)
{
	int	s_a;
	int	s_b;

	s_a = stack_size(*a);
	s_b = stack_size(*b);
	while ((*a_id) < s_a + 1 && (*b_id) < s_b + 1)
	{
		(*a_id)++;
		(*b_id)++;
		use_rrr(a, b);
	}
}

void	rotate_both2(t_stack **a, t_stack **b, int *a_id, int *b_id)
{
	while (*a_id > 1 && *b_id > 1)
	{
		(*a_id)--;
		(*b_id)--;
		use_rr(a, b);
	}
}

void	rotate_a2(t_stack **a, int *a_id)
{
	int	s_a;

	s_a = stack_size(*a);
	if (*a_id <= s_a / 2)
	{
		while (*a_id > 1)
		{
			(*a_id)--;
			use_ra(a);
		}
	}
	else if (*a_id > s_a / 2)
	{
		while (*a_id < s_a + 1)
		{
			(*a_id)++;
			use_rra(a);
		}
	}
}

void	rotate_b2(t_stack **b, int *b_id)
{
	int	s_b;

	s_b = stack_size(*b);
	if (*b_id <= s_b / 2)
	{
		while (*b_id > 1)
		{
			(*b_id)--;
			use_rb(b);
		}
	}
	else if (*b_id > s_b / 2)
	{
		while (*b_id < s_b + 1)
		{
			(*b_id)++;
			use_rrb(b);
		}
	}
}

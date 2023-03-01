/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:30:51 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/01 15:06:59 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	current_cost(t_stack *stack)
{
	int		cost;
	t_stack	*tmp;

	tmp = stack;
	cost = 0;
	while (tmp)
	{
		
	}

	return (cost);
}

int	min_cost(t_stack *stack)
{
	int		cost;
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (cost < current_cost(tmp))
			cost = current_cost(tmp);
		
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:09:32 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/08 16:17:59 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_a_above(int above, t_stack	*stack_a)
{
	int		i;
	int		size;
	t_stack	*tmp;

	i = 0;
	size = stack_size(stack_a);
	tmp = stack_a;
	while (tmp->position != above)
	{
		tmp = tmp->next;
		i++;
	}
	if (i <= size / 2)
		return (i);
	else if (i > size / 2)
		return (size - i);
	return (0);
}

int	cost_a_below(int below, t_stack *stack_a)
{
	int		i;
	int		size;
	t_stack	*tmp;

	i = 1;
	size = stack_size(stack_a);
	tmp = stack_a;
	while (tmp->position != below)
	{
		tmp = tmp->next;
		i++;
	}
	if (i <= size / 2)
		return (i);
	else if (i > size / 2)
		return (size - i);
	return (0);
}

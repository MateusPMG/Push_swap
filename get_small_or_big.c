/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_small_or_big.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:44:10 by mpatrao           #+#    #+#             */
/*   Updated: 2023/02/24 16:09:39 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_smallest(t_stack **stack)
{
	long int	min;
	t_stack		*tmp;

	min = (*stack)->value;
	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}

int	get_second_smallest(t_stack **stack)
{
	long int	min;
	long int	min2;
	t_stack		*tmp;
	int			flag;

	min = get_smallest(stack);
	min2 = min;
	tmp = *stack;
	flag = 0;
	while (tmp->next != NULL)
	{
		if (tmp->value > min && flag == 0)
		{
			min2 = tmp->value;
			flag++;
		}
		if (tmp->value > min && tmp->value < min2)
			min2 = tmp->value;
		tmp = tmp->next;
	}
	return (min2);
}

int	get_biggest(t_stack **stack)
{
	long int	max;
	t_stack		*tmp;

	max = (*stack)->value;
	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->value > max)
			max = tmp->value;
		tmp = tmp->next;
	}
	return (max);
}

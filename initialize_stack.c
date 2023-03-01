/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:20:14 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/01 14:17:52 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*fill_stack(int ac, char **av)
{
	long int	value;
	int			i;
	t_stack		*stack_a;

	i = 1;
	value = 0;
	stack_a = NULL;
	while (i < ac)
	{
		value = ft_atoi(av[i]);
		if (value > INT_MAX || value < INT_MIN)
			ft_error();
		if (i == 1)
			stack_a = stack_new_node(value);
		else
			stack_add_bottom(&stack_a, stack_new_node(value));
		i++;
	}
	return (stack_a);
}

void	init_pos(t_stack *stack_a)
{
	int		size;
	t_stack	*temp;
	t_stack	*start;

	size = stack_size(stack_a);
	start = stack_a;
	temp = stack_a;
	while (start)
	{
		if (start->value < temp->value)
			temp->position++;
		temp = temp->next;
		if (temp == NULL)
		{
			start = start->next;
			temp = stack_a;
		}
	}
	return ;
}

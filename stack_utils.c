/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:38:11 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/01 13:35:33 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new_node(int content)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = content;
	new_node->next = NULL;
	new_node->position = 0;
	return (new_node);
}

void	stack_add_bottom(t_stack **stack, t_stack *new_node)
{
	t_stack	*current_node;

	current_node = *stack;
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
}

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

t_stack	*get_stack_bottom(t_stack *stack)
{
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

t_stack	*get_stack_before_bottom(t_stack *stack)
{
	while (stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

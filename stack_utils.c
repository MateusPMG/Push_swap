/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:38:11 by mpatrao           #+#    #+#             */
/*   Updated: 2023/01/12 12:17:02 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new_node(void *content)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = content;
	new_node->next = NULL;
	return (new_node);
}

t_stack	*stack_add_bottom(t_stack **stack, t_stack *new_node)
{
	t_stack	*current_node;

	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
}

int	stack_size(t_stack *stack_a)
{
	int	size;

	size = 0;
	
}

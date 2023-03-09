/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:31:27 by mpatrao           #+#    #+#             */
/*   Updated: 2023/03/09 18:35:57 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/* static void	print_list_info(t_stack *stack_a)
{
	int		i;
	int		j;
	int		k;
	t_stack	*temp;

	i = 1;
	temp = stack_a;
	printf("Stack A\n");
	while (stack_a)
	{
		j = stack_a->value;
		k = stack_a->position;
		printf("Node %i: Value %i\t\tPosition %i\n", i, j, k);
		stack_a = stack_a->next;
		if (stack_a == temp)
			break ;
		i++;
	}
	printf("\n");
	return ;
} */

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	if (ac <= 2)
		return (0);
	if (!valid_input(av))
		ft_error();
	stack_b = NULL;
	stack_a = fill_stack(ac, av);
	size = stack_size(stack_a);
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		return (0);
	}
	init_pos(stack_a);
	/* print_list_info(stack_a); */
	pick_sort(&stack_a, &stack_b, size);
	/* print_list_info(stack_a); */
	free_stack(&stack_a);
	return (0);
}

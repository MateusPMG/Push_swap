/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:20:14 by mpatrao           #+#    #+#             */
/*   Updated: 2023/01/12 15:22:03 by mpatrao          ###   ########.fr       */
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

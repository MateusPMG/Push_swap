/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:31:27 by mpatrao           #+#    #+#             */
/*   Updated: 2023/01/12 14:33:36 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	/*t_stack	*stack_b;*/
	/*int		size;*/

	if (ac < 2)
		return (0);
	if (!valid_input(av))
		ft_error();
	/* stack_b = NULL; */
	stack_a = fill_stack(ac, av);
	/* size = stack_size(stack_a); */
	free_stack(&stack_a);
	return (0);
}

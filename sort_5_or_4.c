/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_or_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:31:21 by mpatrao           #+#    #+#             */
/*   Updated: 2023/02/22 16:04:34 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4(t_stack	**stack)
{
	long int	a;
	t_stack		*tmp;

	a = (*stack)->value;
	tmp = stack;
	if (a == 1)
	{
		sort_3(tmp);
	}
}
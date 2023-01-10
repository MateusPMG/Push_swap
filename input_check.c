/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:11:43 by mpatrao           #+#    #+#             */
/*   Updated: 2023/01/10 13:37:10 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arg_is_number(char *av)
{
	int	i;

	if (is_sign(av[i]) && )
	{

	}
}

int	arg_is_duplicate(char *av)
{

}

int	arg_is_zero(char *av)
{

}

int	valid_input(char **av)
{
	int	i;
	int	zeros;

	while (av[i])
	{
		if (!arg_is_number(av[i]))
			return (0);
		zeros += arg_is_zero(av[i]);
		i++;
	}
	if (zeros > 1)
		return (0);
	if (arg_is_duplicate(av))
		return (0);
	return (1);
}

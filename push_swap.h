/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:29:45 by mpatrao           #+#    #+#             */
/*   Updated: 2023/01/10 16:12:59 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>

typedef struct l_list
{
	void			*value;
	struct l_list	*next;
}t_stack;

/* input check */
int	arg_is_number(char *av);
int	arg_has_duplicate(char **av);
int	arg_is_zero(char *av);
int	valid_input(char **av);
int	is_digit(char c);
int	is_sign(char c);
int	n_string_compare(const	char *s1, const char *s2);

/* error */
int	ft_error(void);

#endif
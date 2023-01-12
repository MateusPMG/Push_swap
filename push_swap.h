/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:29:45 by mpatrao           #+#    #+#             */
/*   Updated: 2023/01/12 15:19:15 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

typedef struct l_list
{
	long int			value;
	struct l_list		*next;
}t_stack;

/*input check*/
int		arg_is_number(char *av);
int		arg_has_duplicate(char **av);
int		arg_is_zero(char *av);
int		valid_input(char **av);

/*input check utils*/
int		is_digit(char c);
int		is_sign(char c);
int		n_string_compare(const	char *s1, const char *s2);

/*utils*/
int		ft_error(void);
int		ft_atoi(const char *str);
void	free_stack(t_stack **stack);


/*initialize stack*/
t_stack	*fill_stack(int ac, char **av);

/*stack utils*/
t_stack	*stack_new_node(int content);
void	stack_add_bottom(t_stack **stack, t_stack *new_node);
int		stack_size(t_stack *stack_a);



#endif
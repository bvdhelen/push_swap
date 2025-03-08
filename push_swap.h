/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:14:36 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/12/31 14:01:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h> //Biblioteca estándar, malloc() y free()
# include <unistd.h> //Para write()
# include <stdio.h> //Para printf()
# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h> //Para INT_MIN y INT_MAX
# include "../libft/libft.h"

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

//Process data & exec

int		main(int argc, char **argv);
int		ft_atoi2(const char *nptr);
t_stack	*fill_stack(char **argv);
t_stack	*ft_sub_process(char **argv);
t_stack	*ft_process(int argc, char **argv);
t_stack	*ft_parse_args(int argc, char **argv);
void	list_args(char **argv, t_stack **stack_a);

//Operations
void	sa(t_stack **a, int j);
void	sb(t_stack **b, int j);
void	ss(t_stack **a, t_stack **b, int j);
void	pa(t_stack **a, t_stack **b, int j);
void	pb(t_stack **a, t_stack **b, int j);
void	ra(t_stack **a, int j);
void	rb(t_stack **b, int j);
void	rra(t_stack **a, int j);
void	rrb(t_stack **b, int j);
void	rr(t_stack **a, t_stack **b, int j);
void	rrr_sub(t_stack **b, int j);
void	rrr(t_stack **a, t_stack **b, int j);


//Stack Utils
void	ft_add_back(t_stack **stack, t_stack *new_node);
t_stack	*last(t_stack *lst);
t_stack	*new_node(int content);
int		min(t_stack *stack);
int		max(t_stack *stack);
int		size(t_stack *lst);
int		ft_atoi2(const char *nptr);
int		ft_find_index(t_stack *stack, int num);
int		ft_find_place_a(t_stack *stack_a, int num);
int		ft_find_place_b(t_stack *stack_b, int num);
int		ft_case_ra_rb(t_stack *a, t_stack *b, int num);
int		ft_case_ra_rb_a(t_stack *a, t_stack *b, int num);
int		ft_case_ra_rrb(t_stack *a, t_stack *b, int num);
int		ft_case_ra_rrb_a(t_stack *a, t_stack *b, int num);
int		ft_case_rra_rb(t_stack *a, t_stack *b, int num);
int		ft_case_rra_rb_a(t_stack *a, t_stack *b, int num);
int		ft_case_rra_rrb(t_stack *a, t_stack *b, int num);
int		ft_case_rra_rrb_a(t_stack *a, t_stack *b, int num);

//Checks

void	check_alpha(char **argv);
void	ft_free_stack(t_stack **lst);
void	ft_free_str(char **lst);
void	ft_error(void);
int		sign(int c);
int		digit(int c);
int		space(int c);
int		alpha_num(int c);
int		check_args(char **argv);
int		check_number(char **argv, int i, int j);
int		check_order(t_stack *stack);
int		check_duplicates(t_stack *stack);

//Algorithm 

int		ft_less_rotations_ab(t_stack *a, t_stack *b);
int		ft_less_rotations_ba(t_stack *a, t_stack *b);
int		ft_apply_ra_rb(t_stack **a, t_stack **b, int num, char stack);
int		ft_apply_ra_rrb(t_stack **a, t_stack **b, int num, char stack);
int		ft_apply_rra_rb(t_stack **a, t_stack **b, int num, char stack);
int		ft_apply_rra_rrb(t_stack **a, t_stack **b, int num, char stack);
void	ft_sort_3(t_stack **stack_a);
void	ft_sort_till_3(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_prepare_sorting(t_stack **stack_a);
t_stack	**ft_insert_sorted(t_stack **stack_a, t_stack **stack_b);
void	ft_sort(t_stack **stack_a);

#endif

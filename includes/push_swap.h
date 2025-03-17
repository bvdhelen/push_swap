/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 00:01:02 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/17 19:43:06 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

//Process data

int			ft_atoi2(const char *str);
void		ft_freestr(char **lst);
t_stack		*fill_stack(char **argv);
t_stack		*sub_process(char **argv);
t_stack		*process(int argc, char **argv);
t_stack		*parse_args(int argc, char **argv);
void		list_args(char **argv, t_stack **stack_a);

//Operations

void		sa(t_stack **a, int j);
void		sb(t_stack **b, int j);
void		ss(t_stack **a, t_stack **b, int j);
void		pa(t_stack **a, t_stack **b, int j);
void		pb(t_stack **a, t_stack **b, int j);
void		ra(t_stack **a, int j);
void		rb(t_stack **b, int j);
void		rra(t_stack **a, int j);
void		rrb(t_stack **b, int j);
void		rr(t_stack **a, t_stack **b, int j);
void		rrr_sub(t_stack **b, int j);
void		rrr(t_stack **a, t_stack **b, int j);

//Stack Utils

void		ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack		*ft_new_node(int content);
t_stack		*ft_lstlast(t_stack *lst);
int			ft_lstsize(t_stack *lst);
int			ft_min(t_stack *a);
int			ft_max(t_stack *a);
int			ft_find_index(t_stack *a, int nbr);
int			ft_find_place_a(t_stack *a, int nbr_push);
int			ft_find_place_b(t_stack *b, int nbr_push);
int			ft_case_rarb(t_stack *a, t_stack *b, int c);
int			ft_case_rarrb(t_stack *a, t_stack *b, int c);
int			ft_case_rrarb(t_stack *a, t_stack *b, int c);
int			ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int			ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);

//Checks

void		check_alpha(char **argv);
void		ft_free(t_stack **lst);
void		ft_error(void);
int			sign(int c);
int			digit(int c);
int			space(int c);
int			ft_isalpha(int c);
int			check_args(char **argv);
int			check_duplicates(t_stack *a);
int			check_order(t_stack *stack_a);
int			check_number(char **argv, int i, int j);

//Algorithm

int			ft_less_rotations_ab(t_stack *a, t_stack *b);
int			ft_less_rotations_ba(t_stack *a, t_stack *b);
int			ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
void		ft_sort_3(t_stack **stack_a);
void		ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
t_stack		**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
t_stack		*ft_sort_b(t_stack **stack_a);
void		ft_sort(t_stack **stack_a);

#endif
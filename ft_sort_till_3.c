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

#include "../includes/push_swap.h"

//Función para ordenar y empujar los elementos de A a B hasta que queden 3
void	ft_sort_till_3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*temp;

	while (size(*stack_a) > 3 && !check_order(*stack_a))
	{
		temp = *stack_a;
		i = ft_less_rotations_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_ra_rb(*stack_a, *stack_b, temp->nbr))
				i = ft_apply_ra_rb(stack_a, stack_b, temp->nbr, 'a');
			else if (i == ft_case_rra_rrb(*stack_a, *stack_b, temp->nbr))
				i = ft_apply_rra_rrb(stack_a, stack_b, temp->nbr, 'a');
			else if (i == ft_case_ra_rrb(*stack_a, *stack_b, temp->nbr))
				i = ft_apply_ra_rrb(stack_a, stack_b, temp->nbr, 'a');
			else if (i == ft_case_rra_rb(*stack_a, *stack_b, temp->nbr))
				i = ft_apply_rra_rb(stack_a, stack_b, temp->nbr, 'a');
			else
				temp = temp->next;
		}
	}
}

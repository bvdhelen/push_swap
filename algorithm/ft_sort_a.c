/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:32:05 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/13 20:24:04 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*temp;

	while (*stack_b)
	{
		temp = *stack_b;
		i = ft_less_rotations_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, temp->nbr))
				i = ft_apply_rarb(stack_a, stack_b, temp->nbr, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, temp->nbr))
				i = ft_apply_rarrb(stack_a, stack_b, temp->nbr, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, temp->nbr))
				i = ft_apply_rrarrb(stack_a, stack_b, temp->nbr, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, temp->nbr))
				i = ft_apply_rrarb(stack_a, stack_b, temp->nbr, 'b');
			else
				temp = temp->next;
		}
	}
	return (stack_a);
}

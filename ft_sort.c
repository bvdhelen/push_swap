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

//Función para dejar el stack A finalmente ordenado
void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (size(*stack_a) == 2)
		sa(stack_a, 0);
	else
	{
		stack_b = ft_prepare_sorting(stack_a);
		stack_a = ft_insert_sorted(stack_a, &stack_b);
		i = ft_find_index(*stack_a, min(*stack_a));
		if (i < size(*stack_a) - i)
		{
			while ((*stack_a)->nbr != min(*stack_a))
				ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->nbr != min(*stack_a))
				rra(stack_a, 0);
		}
	}
}

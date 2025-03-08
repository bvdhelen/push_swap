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

//Función para mover números de A a B hasta dejar 3 números en A, ordenarlos
//y si aún no está ordenado, ordena los 3 elementos que tiene el stack A
t_stack	*ft_prepare_sorting(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (size(*stack_a) > 3 && !check_order(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (size(*stack_a) > 3 && !check_order(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (size(*stack_a) > 3 && !check_order(*stack_a))
		ft_sort_till_3(stack_a, &stack_b);
	if (!check_order(*stack_a))
		ft_sort_3(stack_a);
	return (stack_b);
}

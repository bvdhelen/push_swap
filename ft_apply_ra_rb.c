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

//Función que rota ambos stacks en dirección directa
int	ft_apply_ra_rb(t_stack **a, t_stack **b, int num, char stack)
{
	if (stack == 'a')
	{
		while ((*a)->nbr != num && ft_find_place_b(*b, num) > 0)
			rr(a, b, 0);
		while ((*a)->nbr != num)
			ra(a, 0);
		while (ft_find_place_b(*b, num) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != num && ft_find_place_a(*a, num) > 0)
			rr(a, b, 0);
		while ((*b)->nbr != num)
			rb(b, 0);
		while (ft_find_place_a(*a, num) > 0)
			ra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

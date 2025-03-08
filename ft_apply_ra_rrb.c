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

//Función que rota el stack A en dirección directa
//y el stack B en dirección inversa
int	ft_apply_ra_rrb(t_stack **a, t_stack **b, int num, char stack)
{
	if (stack == 'a')
	{
		while ((*a)->nbr != num)
			ra(a, 0);
		while (ft_find_place_b(*b, num) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, num) > 0)
			ra(a, 0);
		while ((*b)->nbr != num)
			rrb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}

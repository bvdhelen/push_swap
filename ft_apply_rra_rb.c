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

//Función que rota el stack A en dirección inversa
//y el stack B en dirección directa
int	ft_apply_rra_rb(t_stack **a, t_stack **b, int num, char stack)
{
	if (stack == 'a')
	{
		while ((*a)->nbr != num)
			rra(a, 0);
		while (ft_find_place_b(*b, num) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, num) > 0)
			rra(a, 0);
		while ((*b)->nbr != num)
			rb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}

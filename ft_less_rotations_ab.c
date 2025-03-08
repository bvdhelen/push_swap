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

//Determinar el num que requiere el menor nº de rotaciones para moverse de A a B
//Calcular el tipo de rotación más eficiente para mover un num de A a B
int	ft_less_rotations_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*temp;

	temp = a;
	i = ft_case_rra_rrb(a, b, a->nbr);
	while (temp)
	{
		if (i > ft_case_ra_rb(a, b, temp->nbr))
			i = ft_case_ra_rb(a, b, temp->nbr);
		if (i > ft_case_rra_rrb(a, b, temp->nbr))
			i = ft_case_rra_rrb(a, b, temp->nbr);
		if (i > ft_case_ra_rrb(a, b, temp->nbr))
			i = ft_case_ra_rrb(a, b, temp->nbr);
		if (i > ft_case_rra_rb(a, b, temp->nbr))
			i = ft_case_rra_rb(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}

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

//Calcular el nº de rotaciones (inversas en A y directas en B) 
//necesarias para mover un nº de B a A
int	ft_case_rra_rb(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (ft_find_index(a, num))
		i = (size(a) - ft_find_index(a, num));
	i = (ft_find_place_b(b, num)) + i;
	return (i);
}

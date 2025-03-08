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

//Función para encontrar el lugar correcto de un nº en el stack B
int	ft_find_place_b(t_stack *stack_b, int num)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (num > stack_b->nbr && num < last(stack_b)->nbr)
		i = 0;
	else if (num > max(stack_b) || num < min(stack_b))
		i = ft_find_index(stack_b, max(stack_b));
	else
	{
		temp = stack_b->next;
		while (stack_b->nbr < num || temp->nbr > num)
		{
			stack_b = stack_b->next;
			temp = stack_b->next;
			i++;
		}
	}
	return (i);
}

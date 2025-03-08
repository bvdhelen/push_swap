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

//Función para encontrar el lugar correcto de un nº en el stack A
int	ft_find_place_a(t_stack *stack_a, int num)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (num < stack_a->nbr && num > last(stack_a)->nbr)
		i = 0;
	else if (num > max(stack_a) || num < min(stack_a))
		i = ft_find_index(stack_a, min(stack_a));
	else
	{
		temp = stack_a->next;
		while (stack_a->nbr > num || temp->nbr < num)
		{
			stack_a = stack_a->next;
			temp = stack_a->next;
			i++;
		}
	}
	return (i);
}

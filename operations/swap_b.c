/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 20:01:21 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/17 21:55:24 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Función que intercambia los dos primeros elementos del stack B
void	sb(t_stack **b, int j)
{
	t_stack	*temp;

	if (!*b || !((*b)->next))
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
	if (j == 0)
		write(1, "sb\n", 3);
}

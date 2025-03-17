/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:45:27 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/17 21:54:21 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Función que intercambia los dos primeros elementos del stack A
void	sa(t_stack **a, int j)
{
	t_stack	*temp;

	if (!*a || !((*a)->next))
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
	if (j == 0)
		write(1, "sa\n", 3);
}

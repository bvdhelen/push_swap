/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:51:13 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/17 21:50:56 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Función que desplaza los elementos del stack A una posición hacia abajo
//El último elemento se convierte en el primero
void	rra(t_stack **a, int j)
{
	t_stack	*temp;
	int		i;

	if (!*a || !(*a)->next)
		return ;
	i = 0;
	temp = *a;
	while ((*a)->next)
	{
		i++;
		*a = (*a)->next;
	}
	(*a)->next = temp;
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	temp->next = NULL;
	if (j == 0)
		write(1, "rra\n", 4);
}

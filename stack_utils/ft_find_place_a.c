/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_place_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:36:20 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/18 20:47:03 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_find_place_a(t_stack *a, int nbr_push)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (nbr_push < a->nbr && nbr_push > ft_lstlast(a)->nbr)
		i = 0;
	else if (nbr_push > ft_max(a) || nbr_push < ft_min(a))
		i = ft_find_index(a, ft_min(a));
	else
	{
		temp = a->next;
		while (a->nbr > nbr_push || temp->nbr < nbr_push)
		{
			a = a->next;
			temp = a->next;
			i++;
		}
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_place_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:36:01 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/18 20:47:07 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_find_place_b(t_stack *b, int nbr_push)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (nbr_push > b->nbr && nbr_push < ft_lstlast(b)->nbr)
		i = 0;
	else if (nbr_push > ft_max(b) || nbr_push < ft_min(b))
		i = ft_find_index(b, ft_max(b));
	else
	{
		temp = b->next;
		while (b->nbr < nbr_push || temp->nbr > nbr_push)
		{
			b = b->next;
			temp = b->next;
			i++;
		}
	}
	return (i);
}

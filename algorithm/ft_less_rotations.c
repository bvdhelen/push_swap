/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_less_rotations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:09:42 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/13 20:23:20 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_less_rotations_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*temp;

	temp = b;
	i = ft_case_rrarrb_a(a, b, b->nbr);
	while (temp)
	{
		if (i > ft_case_rarb_a(a, b, temp->nbr))
			i = ft_case_rarb_a(a, b, temp->nbr);
		if (i > ft_case_rrarrb_a(a, b, temp->nbr))
			i = ft_case_rrarrb_a(a, b, temp->nbr);
		if (i > ft_case_rarrb_a(a, b, temp->nbr))
			i = ft_case_rarrb_a(a, b, temp->nbr);
		if (i > ft_case_rrarb_a(a, b, temp->nbr))
			i = ft_case_rrarb_a(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}

int	ft_less_rotations_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*temp;

	temp = a;
	i = ft_case_rrarrb(a, b, a->nbr);
	while (temp)
	{
		if (i > ft_case_rarb(a, b, temp->nbr))
			i = ft_case_rarb(a, b, temp->nbr);
		if (i > ft_case_rrarrb(a, b, temp->nbr))
			i = ft_case_rrarrb(a, b, temp->nbr);
		if (i > ft_case_rarrb(a, b, temp->nbr))
			i = ft_case_rarrb(a, b, temp->nbr);
		if (i > ft_case_rrarb(a, b, temp->nbr))
			i = ft_case_rrarb(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}

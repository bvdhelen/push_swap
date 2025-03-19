/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:43:11 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/19 17:43:15 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_new_node(int content, t_stack **lst)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		ft_error(lst);
	new->nbr = content;
	new->next = NULL;
	return (new);
}
